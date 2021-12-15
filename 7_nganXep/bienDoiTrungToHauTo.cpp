#include<bits/stdc++.h>
using namespace std;

int priority(char a)
{
	if(a == '^') return 4;
	else if(a == '*' || a == '/' || a == '%') return 3;
	else if(a == '+' || a == '-') return 2;
	return 1;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		stack <char> res;
		string f;
		for(int i = 0; i < s.size(); i ++ )
		{
//			if(s[i] >= 'A' && s[i] <= 'Z') f += s[i];
//			else if(s[i] >= 'a' && s[i] <= 'z') f += s[i];
			if(s[i] == '(') res.push(s[i]);
			else if(s[i] == ')')
			{
				while(res.size() > 0 && res.top() != '(')
				{
					f += res.top();
					res.pop();
				}
				res.pop();
			}
			else if(s[i] =='+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
			{
				while(res.size() > 0 && res.top() != '(' && priority(s[i]) <= priority(res.top()))
				{
					f += res.top();
					res.pop();
				}
				res.push(s[i]);
			}
			else f += s[i];
		}
		cout << f;
		while(res.size() > 0 && res.top() != '(')
		{
			cout << res.top();
			res.pop();
		}
		cout << endl;
	}
	return 0;
}

