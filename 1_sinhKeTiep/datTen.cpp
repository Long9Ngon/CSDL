#include<bits/stdc++.h>
using namespace std;

int a[20],k,n;

void Try(int x) {
	for(int i= a[x-1] + 1 ; i<=n-k+x ; i++) {
		a[x] = i;
		if(x == k)
		{
			for(int j = 1; j <= k; j++) 
			{
				cout << (char) (a[j] + '0' + 16 );

			}
			cout << endl;
		}
		else
			Try(x+1);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		Try(1); 
	}
	return 0;
}

