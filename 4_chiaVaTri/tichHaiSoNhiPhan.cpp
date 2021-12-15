#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		string a, b;
		cin >> a >> b;
		int m = a.size()-1;
		int n = b.size()-1;
		long long c = 0, d = 0;
		for(int i = m; i >=0; i--) c += (long long)pow(2,m-i)*(a[i] - '0');
		for(int i = n; i >=0; i--) d += (long long)pow(2,n-i)*(b[i] - '0');
		cout << (long long)(c*d) << endl;	
	}
	return 0;
}

