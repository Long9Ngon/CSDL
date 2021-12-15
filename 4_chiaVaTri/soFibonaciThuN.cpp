#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
long long n;
long long F[2][2], M[2][2], E[2][2];

void tich(long long f[2][2],long long m[2][2])
{
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{	
			int h = 0;
			for(int k = 0; k < 2; k++)
			{
				h += (f[i][k] * m[k][j]) % mod;
				h %= mod;
			}
			E[i][j] = h;
		}
	}
	
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			f[i][j] = E[i][j];
}

void Pow(long long f[2][2], long long n)
{
	if(n <= 1) return;
	Pow(f,n/2);
	tich(f,f);
	if(n % 2 == 1) tich(f,M);
}

void solve()
{
	F[0][0] = F[0][1] = F[1][0] = 1;
	F[1][1] = 0;
	M[0][0] = M[0][1] = M[1][0] = 1;
	M[1][1] = 0;
	
	if(n == 0) cout << "0";
	else
	{
		Pow(F,n-1);
		cout << F[0][0];
	  }  
	cout << endl;
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		solve(); 
	}
	return 0;
}

