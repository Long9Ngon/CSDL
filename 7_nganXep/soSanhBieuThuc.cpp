#include<bits/stdc++.h>
using namespace std;

string s1,s2;

string chuyen(string a)
{
	stack <char> res, ans;
	for(int i = a.size() - 1; i >= 0; i-- )
	{
		if(a[i] == '(')
		{
			if(a[i-1] == '-')
			{
				while(res.top() != ')')
				{
					if(res.top() == '+') 
					{
						ans.push('-');
						res.pop();
						continue;
					}
					if(res.top() == '-')
					{
						ans.push('+');
						res.pop();
						continue;
					}
					ans.push(res.top());
					res.pop();
				}
				res.pop();
				while(ans.size() > 0)
				{
					res.push(ans.top());
					ans.pop();
				}
			}
			else
			{
				while(res.top() != ')')
				{
					ans.push(res.top());
					res.pop();
				}
				res.pop();
				while(ans.size() > 0)
				{
					res.push(ans.top());
					ans.pop();
				}
			}	
		}
		else res.push(a[i]);
	}
	string c;
	while(res.size() > 0)
	{
		c += res.top();
		res.pop();
	}
	return c;
} 

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s1 >> s2;
		string s1_chuyen = chuyen(s1);
		string s2_chuyen = chuyen(s2);
		if(s1_chuyen == s2_chuyen) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

