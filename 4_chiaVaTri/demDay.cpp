#include<bits/stdc++.h>
using namespace std;

const long long mod = 123456789;

long long Pow(int a, long long b)
{
	if(b == 0) return 1;
	long long tmp = Pow(a, b/2);
	if(b % 2 == 0) return tmp*tmp%mod;
	if(b % 2 == 1) return (tmp*tmp%mod)*2%mod;
}
int main() {
	int T; cin >> T;
	while (T--) {
		long long n;
		cin >> n;
		cout << Pow(2, n-1) << endl;;
	}
	return 0;
}

