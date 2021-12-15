#include<bits/stdc++.h>
using namespace std;
int dp[101][25001];
int w[101];
int main() {
		int c, n;
		cin >> c >> n;
		for(int i = 1; i <= n; i++) cin >> w[i]; 
		for(int i = 0; i <= c; i++) dp[0][i] = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= c; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if(w[i] < j) dp[i][j] = max(dp[i-1][j-w[i]] + w[i], dp[i - 1][j]);
			}
		}
		cout << dp[n][c] << endl;
		return 0;
}

