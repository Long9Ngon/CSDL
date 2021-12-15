#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		long long k;
		cin >> n >> k;
		long long len = (long long) pow(2,n-1);
		
		while(1)
		{
			if( n == 1)
			{
				cout << "1";
				break;
			}
			
			if( len == k)
			{
				cout << n;
				break;
			}
			
			if( k > len)
			{
				k = len - ( k - len);
			}
			
			n--;
			len /= 2;
		}
		cout << endl;
	}
	return 0;
}

