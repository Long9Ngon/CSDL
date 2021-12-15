#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
int n;
long long k;
long long A[10][10], M[10][10], b[10][10]; 

void tich(long long f[10][10], long long m[10][10])
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int re = 0;
			for(int k = 0; k < n; k++)
			{
				re += (f[i][k]*m[k][j])%mod;
				re %= mod;
			}
			b[i][j] = re;
		}
	}
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			f[i][j] = b[i][j];
}

void Pow(long long f[10][10], long long k)
{
	if(k == 1) return;
	Pow(f,k/2);
	tich(f,f);
	if(k % 2 == 1) tich(f,M);
}

void solve()
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{	
			cin >> A[i][j];
			M[i][j] = A[i][j];
		}
	Pow(A,k);
	for(int i = 0; i < n; i++)
	{	
		for(int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		solve();
	}
	return 0;
}

