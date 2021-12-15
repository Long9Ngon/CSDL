#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int b[10] = {0};
		
		for(int i = 0; i < n; i++)
		{
			while(a[i] > 0)
			{
				int j = a[i] % 10;
				b[j] ++;
				a[i] /= 10;
			}
		}
		
		for(int i = 0; i < 10; i++)
		{
			if(b[i] > 0) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

