#include<bits/stdc++.h>
using namespace std;

int n;
vector <string> ans;

void solve()
{
	queue <string> res;
	res.push("0");
	while(res.size() > 0)
	{
		if(res.front().size() > n+1) break;
		string s = res.front();
		res.pop();
		ans.push_back(s);
		res.push(s + '6');
		res.push(s + '8');
	}
 } 

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		ans.clear();
		solve();
		cout << ans.size() - 1 << endl;
		for(int j = ans.size() - 1; j >= 1; j--)
		{
			string s = ans[j];
			for(int i = 1; i < s.size(); i++) cout << s[i];
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}

