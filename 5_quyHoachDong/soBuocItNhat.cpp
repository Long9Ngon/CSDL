#include<bits/stdc++.h>
using namespace std;
int a[1000];
int f[1000];
int main() {
	int test;
	cin >> test;
	while(test--)
	{ 
		int n;
		cin >> n;
		for ( int i = 1; i <= n; i++) cin >> a[i];
		int result = 1;
		for ( int i = 1; i <= n; i++)
		{
			f[i] = 1;
			for(int j = 0; j < i; j++)
				if(a[i]>=a[j]) f[i] = max(f[i], f[j] + 1);
			result = max(result, f[i]);
		}
	cout << n-result << endl;
	}
	return 0;
}

