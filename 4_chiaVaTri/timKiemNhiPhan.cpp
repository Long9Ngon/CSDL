#include<bits/stdc++.h>
using namespace std;
int n, k, a[100001]; 
int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		int vt = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if(a[i] == k ) vt = i;
		}
		if(vt == 0) cout << "NO";
		else cout << vt;
		cout << endl;

	}
	return 0;
}

