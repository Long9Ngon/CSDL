#include<bits/stdc++.h>
using namespace std;
int a[201], l[40005];
int main() {
	int T; cin >> T;
	while (T--) {
		int n, s;
		cin >> n >> s;
		for ( int i = 1; i <= n; i++) cin >> a[i];
		l[0] = 1;
		for( int t = 1; t <= s; t++) l[t] = 0; 
		for( int i = 0; i <= n; i++ ) 
			for( int t = s; t >= a[i]; t--)
				if(l[t] == 0 && l[t - a[i]] == 1) l[t] = 1;
		if(l[s]) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}

