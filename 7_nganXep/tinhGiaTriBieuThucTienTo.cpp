#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		stack <long long> re;
		for(int i = s.size() - 1; i >= 0; i--)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
			{
				long long f = re.top();
				re.pop();
				long long h = re.top();
				re.pop();
				long long tmp;
				if(s[i] == '+') tmp = f + h;
				if(s[i] == '-') tmp = f - h;
				if(s[i] == '*') tmp = f * h;
				if(s[i] == '/') tmp = f / h;
				if(s[i] == '%') tmp = f % h;
				re.push(tmp);
			}
			else
			{
				long long tmp = s[i] - '0';
				re.push(tmp);
			}
		}
		while(re.size() > 0)
		{
			cout << re.top();
			re.pop();
		}
		cout << endl;
	}
	return 0;
}

