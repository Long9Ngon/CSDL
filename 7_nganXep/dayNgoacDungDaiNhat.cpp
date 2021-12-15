#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		string day;
		cin >> day;
		stack <int> target;
		int n = day.size();
		int res = 0;
		target.push(-1);
		
		for(int i = 0; i < n; i++)
		{
			if(day[i] == '(')
			{
				target.push(i);
			}
			else if(day[i] == ')')
			{
				target.pop();
				if(target.size() > 0)
					res = max( res, i - target.top());
				if(target.size()==0) target.push(i);
			}
		}
		 cout << res << endl;
	}
	return 0;
}

