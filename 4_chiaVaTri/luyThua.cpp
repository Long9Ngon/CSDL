#include<bits/stdc++.h>
const int mul= 1e9+7;
using namespace std;
long long luythua(int n, int k)
{
	if(k == 0) return 1;
	if(k % 2 == 0) return (luythua( n, k/2) * luythua( n, k/2)) % mul;
	else return ((luythua( n, k/2) * luythua( n, k/2)) % mul) * n % mul;
}
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		int k;
		cin >> n >> k;
		cout << luythua(n,k) << endl;

	}
	return 0;
}

