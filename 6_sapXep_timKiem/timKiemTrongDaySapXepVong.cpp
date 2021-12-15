#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n, x, vt;
		cin >> n >> x;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			if(a[i] == x) vt = i + 1;
		}
		cout << vt << endl;
	}
	return 0;
}

