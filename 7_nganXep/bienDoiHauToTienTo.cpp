#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		stack <string> res;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string a = res.top();
				res.pop();
				string b = res.top();
				res.pop();
				string c = s[i] + b + a;
				res.push(c);
			}
			else
			{
				string c;
				c += s[i];
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

