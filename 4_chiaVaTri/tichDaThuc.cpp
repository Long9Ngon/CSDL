#include<bits/stdc++.h>
using namespace std;

int a[100], b[100], c[200];
int main(){
	int T; cin >> T;
	while (T--) {
		int m,n;
		cin >> m >> n;
		for(int i = 0; i < m; i++) cin >> a[i]; 
		for(int i = 0; i < n; i++) cin >> b[i];
		memset(c, 0, sizeof(c));
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				c[i+j] += (a[i]*b[j]);
			}
		}
		for(int k = 0; k < m+n-1 ; k++) cout << c[k] << " ";
		cout << endl;
	}
	return 0;
}

