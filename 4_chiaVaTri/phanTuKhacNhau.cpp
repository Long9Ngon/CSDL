#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long n, kt = 0;
		cin >> n;
		vector <long long> a(n + 1), b(n);
		for(long long i = 1; i<= n; i++) cin >> a[i]; 
		for(long long i = 1; i<= n - 1; i++) cin >> b[i]; 
		for(long long i = 1; i<= n - 1; i++)
		{
			if(a[i] != b[i]) 
			{
				cout << i <<endl;
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << n << endl;
	}
	return 0;
}

