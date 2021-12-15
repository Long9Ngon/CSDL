#include<bits/stdc++.h>
using namespace std;

int a[1001], m[1001];
int dp[1001][1001];
int main() {
	int T; cin >> T;
	while (T--) {
		int v, n;
		cin >> n >> v;
		for(int i = 1; i <= n; i++) cin >>a[i];
		for(int i = 1; i <= n; i++) cin >>m[i];

		for(int i = 0; i <= v; i++) dp[0][i] = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= v; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if(a[i] <= j)
					dp[i][j] = max(dp[i - 1][j - a[i]] + m[i], dp[i - 1][j]);
			}
		}
		cout << dp[n][v] << endl; 
	}
	return 0;
}

