#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n,k;
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort( a, a+n);
		for(int i = n - 1; i >= n - k; i--) cout << a[i] <<" ";
		cout << endl;

	}
	return 0;
}

