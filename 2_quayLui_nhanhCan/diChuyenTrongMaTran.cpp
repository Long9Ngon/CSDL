#include<bits/stdc++.h>
int a[101][101];
int f[101][101]; 
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int m, n;
		cin >> m >> n;
		for( int i = 1; i <= m; i++)
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		for(int i = 1; i <= n; i++) f[1][i] = 1;
		for(int i = 2; i <= m; i++) f[i][1] = 1;
		for(int i = 2; i <= m; i++)
			for(int j = 2; j <= n; j++)
				f[i][j] = f[i-1][j] + f[i][j-1];
		cout << f[m][n] << endl;
	}
	return 0;
}

