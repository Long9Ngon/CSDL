#include<bits/stdc++.h>
using namespace std;

const long long mul = 1e9 + 7;
long dp[1001][1001];

int main() {
	
	for(int i = 0; i <= 1001; i++)
	{
		for(int j = 0; j <= 1001; j++)
		{
			if(i == j || j == 0) dp[i][j] = 1;
			else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			dp[i][j] %= mul;
		}
	}
	
	int T; cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k; 
		cout << dp[n][k] << endl;
	}
	return 0;
}

