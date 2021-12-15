#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		stack <string> re;
		for(int i = s.size() - 1; i >= 0; i--)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
			{
				string f = re.top();
				re.pop();
				string h = re.top();
				re.pop();
				string tmp = '(' + f + s[i] + h + ')';
				re.push(tmp);
			}
			else
			{
				string tmp;
				tmp += s[i];
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

