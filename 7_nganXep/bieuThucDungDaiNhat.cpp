#include<bits/stdc++.h>
using namespace std;

string s; 

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		stack <char> res;
		int dem = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == ')')
			{
				if(res.size() > 0 && res.top() == '(')
				{
					dem += 2;
					res.pop();
				}
				continue;
			}
			res.push(s[i]);
		}
		cout << dem <<endl;
	}
	return 0;
}

