#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		long long n, x;
		cin >> n >> x;
		long long a[n+1];
		int vt = -1;
		for(int i = 1; i <=n; i++)
		{
			cin >> a[i];
			if(a[i] <= x) vt = i;
		}
		cout << vt << endl;
	}
	return 0;
}

