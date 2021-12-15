#include<bits/stdc++.h>
using namespace std;

int dp[101][101][101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int a, b, c;
		cin >> a >> b >> c;
		string x, y, z;
		cin >> x >> y >> z;
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= a; i++)
			for(int j = 1; j <= b; j++)
				for(int k = 1; k <= c; k++)
				{
					if(x[i-1] == y[j-1] && y[j-1] == z[k-1])
						dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
					else
						dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
				}
		cout << dp[a][b][c] << endl;
	}
	return 0;
}

