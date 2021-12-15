#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		stack <int> res;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				int a = res.top();
				res.pop();
				int b = res.top();
				res.pop();
				int c;
				if(s[i] == '+') c = b + a;
				else if(s[i] == '-') c = b - a;
				else if(s[i] == '*') c = b * a;
				else if(s[i] == '/') c = b/a;
				res.push(c);
			}
			else
			{
				int c = s[i] - '0';
				res.push(c);
			}
		}
		while(res.size() > 0)
		{
			cout << res.top();
			res.pop();
		}
		cout << endl;
	}
	return 0;
}

