#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n,x,dem = 0;
		cin >> n >> x;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			if( a[i] == x) dem++;
		}
		if(dem != 0) cout << dem << endl;
		else cout << "-1" << endl;
	}
	return 0;
}

