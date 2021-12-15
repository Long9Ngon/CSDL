#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s;
		getline(cin, s);
		stack <char> res;
		bool ok = false;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == ')')
			{
				ok = true;
				char f = res.top();
				res.pop();
				while(f != '(')
				{
					if(f == '+' || f == '-' || f == '*' || f == '/')
						ok = false;
					f = res.top();
					res.pop();
				}
				if(ok) break;
			}
			else res.push(s[i]);
		}
		if(ok) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}

