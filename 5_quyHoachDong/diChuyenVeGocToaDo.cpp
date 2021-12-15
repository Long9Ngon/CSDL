#include<bits/stdc++.h>
using namespace std;

long dp[26][26];
int main() {
	
	for(int i = 1; i <= 26; i++) dp[0][i] = 1;
	for(int i = 1; i <= 26; i++) dp[i][0] = 1;
	dp[0][0] = 0;
	for(int i = 0; i <= 25; i++)
	{
		for(int j = 0; j <= 25; j++)
		{
			if(i == 0 || j == 0) continue;
			dp[i][j] = dp[i][j-1] + dp[i-1][j];
		}
	}
	
	int T; cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		cout << dp[n][m] << endl;
	}
	return 0;
}

