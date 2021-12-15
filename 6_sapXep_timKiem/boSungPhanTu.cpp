#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort( a, a + n);
		int dem = 0;
		for(int i = 0; i < n - 1; i++)
			if(a[i + 1] - a[i] > 1) dem = dem + a[i + 1] - a[i] - 1;
		cout << dem << endl;

	}
	return 0;
}

