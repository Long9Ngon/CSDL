#include<bits/stdc++.h>
#include<vector>
using namespace std;
int a[1000000], b[1000000];
vector<int> c;
int main() {
	int T; cin >> T;
	while (T--) {
		int m,n,k;
		cin >> m >> n >> k;
		for( int i = 0; i < m; i++) 
		{
			cin >> a[i];
			c.push_back(a[i]);
		}
		for( int i = 0; i < n; i++)
		{
			cin >> b[i];
			c.push_back(b[i]);
		}
		sort(c.begin(), c.end());
		cout << c[k-1] <<endl;
		c.clear();
	}
	return 0;
}

