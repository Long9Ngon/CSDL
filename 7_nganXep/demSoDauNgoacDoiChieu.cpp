#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		stack <char> res;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == ')') 
			{
				if(res.size() > 0 && res.top() == '(') res.pop();
				else res.push(s[i]);
			} 
			if(s[i] == '(') res.push(s[i]);
		}
		int d = 0, m = 0;
		while(res.size() > 0)
		{
			if(res.top() == ')') d++;
			else m++;
			res.pop();
		}
		int result = d/2 + m/2 + d%2 + m%2;
		cout << result << endl;
	}
	return 0;
}

