#include<bits/stdc++.h>
using namespace std;

int dp[100001];

int main() {
	int T; cin >> T;
	dp[1] = 0;
	for(int i = 2; i <= 100000; i++)
	{
		dp[i] = dp[i-1] + 1;
		if(i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
		if(i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
	}
	while (T--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}

