#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

long long Pow(long long a, long long b)
{
	if(b == 0) return 1;
	long long re = Pow(a, b/2);
	if(b % 2 == 0) return re*re%mod;
	if(b % 2 == 1) return (re*re%mod)*a%mod;
}

int main() {
	int T; cin >> T;
	while (T--) {
		long long n;
		cin >> n;
		long long r = 0, tmp = n;
		while (tmp > 0)
		{
			r = r*10 + tmp%10;
			tmp /= 10;
		}
		cout << Pow(n, r) << endl;
	}
	return 0;
}

