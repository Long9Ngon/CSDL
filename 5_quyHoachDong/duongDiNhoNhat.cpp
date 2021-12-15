#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001], a[1001][1001];

int main() {
	int T; cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
	
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				cin >> a[i][j];
		dp[1][1] = a[1][1];
		
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
			{
				if(i == 1) 
				{
					dp[i][j] = dp[i][j-1] + a[i][j];
					continue;
				}
				if(j == 1)
				{
					dp[i][j] = dp[i-1][j] + a[i][j];
					continue;
				}
				dp[i][j] = min(min(dp[i-1][j] + a[i][j], dp[i][j-1] + a[i][j]), dp[i-1][j-1] + a[i][j]);
			}
		cout << dp[n][m] << endl;
	}
	return 0;
}

