#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		long n, tong = 0;
		cin >> n;
		vector <long> a;
		vector <long> b;
		
		for(int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			a.push_back(j);
		}
		
		for(int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			b.push_back(j);
		}
		
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for(int i = 0; i < n; i++)
		{
			tong = tong + a[i]*b[n-i-1];
		}
		cout << tong << endl;
	}
	return 0;
}

