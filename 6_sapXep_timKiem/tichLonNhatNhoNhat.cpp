#include<bits/stdc++.h>
using namespace std;
long a[1000000],b[1000000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n,m;
		cin >> n >> m;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		sort( a, a + n);
		sort( b, b + m);
		cout << a[n-1]*b[0] << endl;

	}
	return 0;
}

