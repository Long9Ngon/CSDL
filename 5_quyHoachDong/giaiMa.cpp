#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		string m;
		cin >> m;
		int dp[43] = {0};
		if(m[0] == '0') 
		{
			cout << "0\n";
			continue;
		}

			dp[0] = 1;
			dp[1] = 1;
			for(int i = 2; i <= m.size(); i++)
			{
				if(m[i-1] > '0') dp[i] = dp[i-1];
				if(m[i-2] == '1' || (m[i-2] == '2' && m[i-1] < '7'))
					dp[i] += dp[i-2];
			}
		cout << dp[m.size()] << endl;
	}
	return 0;
}

