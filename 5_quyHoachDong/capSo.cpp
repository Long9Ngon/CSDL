#include<bits/stdc++.h>
using namespace std;

int dp[101];

struct capso{
	int first, second;
};

bool cmp(capso a, capso b)
{
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int n, ans = 0;
		cin >> n;
		capso a[n+1];
		for(int i = 0; i < n; i++)
			cin >> a[i].first >> a[i].second;
		sort(a, a+n, cmp);
		dp[0] = 1; 
		for(int i = 1; i < n; i++)
		{
			int res = 0;
			for(int j = 0; j < i; j++)
			{
				if(a[j].second < a[i].first) res = max(res, dp[j]);
			}
			dp[i] = res + 1;
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}

