#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int main() {
	int T; cin >> T;
	while (T--) {
		string n, m;
		cin >> n >> m;
		int target = 0;
		for(int i = 0; i <= 1001; i++)
		{
			dp[0][i] = 0;
			dp[i][0] = 0;
		}
		for(int i = 1; i <= n.size(); i++)
			for(int j = 1; j<= m.size(); j++)
			{
				if(n[i - 1] == m[j - 1]) dp[i][j] = dp[i-1][j-1] + 1;
				else dp[i][j] = max(dp[ i - 1][j], dp[i][j - 1]);
				target = max(target, dp[i][j]);
			} 
		cout << target << endl; 
	}
	return 0;
}

