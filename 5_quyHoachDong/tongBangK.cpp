#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int n, k ;
int a[1001]; 

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		for(int i = 0; i < n; i++)	cin >> a[i];
		long long dp[k+1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int i = 1; i <= k; i++)
			for(int j = 0; j < n; j++)
			{
				if(i < a[j]) continue;
				dp[i] = ((long long)dp[i] + dp[i-a[j]]) % mod;
			}
		cout << dp[k] << endl;
	}
	return 0;
}

