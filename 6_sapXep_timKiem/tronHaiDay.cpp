#include<bits/stdc++.h>
using namespace std;
long a[1000000], b[1000000], c[2000000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			c[i] = a[i];
		}
		for(int i = 0; i < m; i++) 
		{
			cin >> b[i];
			c[n + i] = b[i];
		}
		sort( c, c + n + m);
		for(int i = 0; i < n + m; i++) cout << c[i] << " ";
		cout << endl; 
	}
	return 0;
}

