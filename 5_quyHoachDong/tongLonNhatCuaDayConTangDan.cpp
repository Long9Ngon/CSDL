#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001], dp[2001]; 


int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		memset(dp, 0, sizeof(dp));
		dp[0] = a[0];
		int ans = a[0];
		for(int i = 1; i < n; i++)
		{
			int add = 0;
			for(int j = 0; j < i; j++)
			{
				if(a[i] > a[j]) add = max(add, dp[j]);
			}
			dp[i] = add + a[i];
			ans = max(ans, dp[i]); 
		}
		cout << ans << endl; 
	}
	return 0;
}

