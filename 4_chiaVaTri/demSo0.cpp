#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	int T; cin >> T;
	while (T--) {
		int n,dem = 0;
		cin >> n;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			if(a[i] == 0) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}

