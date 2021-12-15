#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n,kt = 0;
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a , a + n);
		for(int i = 1; i < n; i++)
		{
			if(a[i] > a[0])
			{
				cout << a[0] << " " << a[i];
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << "-1";
		cout << endl;
	}
	return 0;
}

