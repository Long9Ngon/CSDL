#include<bits/stdc++.h>
using namespace std;

int n;

string solve()
{
	queue <string> a;
	a.push("9");
	while(a.size() > 0)
	{
		string res = a.front();
		a.pop();
		int b = res.size();
		long long re = 0;
		for(int i = 0; i < b; i++)
		{
			re = re*10 + (int)(res[i]-'0');
			re %= n;
		}
		if(re == 0) return res;
		a.push(res+"0");
		a.push(res+"9");
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		cout << solve() << endl; 
	}
	return 0;
}

