#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	long dp[101] = {0};
		dp[1] = 1; 
		dp[2] = 2;
		dp[3] = 4;
		for(int i = 4; i <= 55; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
	while (T--) {
		int n;
		cin >> n;
		cout << dp[n] << endl; 
	}
	return 0;
}

