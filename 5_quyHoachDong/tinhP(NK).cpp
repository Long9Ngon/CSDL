#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		long long res = 1;
		for(int i = n - k + 1; i <= n; i++)
		{
			long long j = i*res%mod;
			res = res*i%mod;
		}
		cout << res << endl;
	}
	return 0;
}

