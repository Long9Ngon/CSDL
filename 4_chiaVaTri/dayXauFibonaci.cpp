#include<bits/stdc++.h>
using namespace std;

long long f[93];
int n;
long long k;

void xauFib()
{
	while(n > 2)
	{
		if(k <= f[n-2]) n -= 2;
		else
		{
			k = k - f[n-2];
			n -= 1;
		}
	}
	if(n == 1) cout << 'A';
	else cout << 'B';
	cout << endl;
}

int main() {
	f[1] = f[2] = 1;
	for(int i = 3; i <= 93; i++)
		f[i] = f[i-1] + f[i-2]; 
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		xauFib();
	}
	return 0;
}

