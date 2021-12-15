#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n,x;
		cin >> n >> x;
		for(int i = 0; i < n; i++) cin >> a[i];
		bool search = binary_search(a, a + n, x);
		if(search) cout << "1";
		else cout << "-1";
		cout << endl;

	}
	return 0;
}

