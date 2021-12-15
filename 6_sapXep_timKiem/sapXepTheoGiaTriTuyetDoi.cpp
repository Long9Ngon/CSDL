#include<bits/stdc++.h>
using namespace std;
int n, k, a[100001];
void sapxep()
{
	for(int i = n; i > 1; i--)
		for(int j = 1 ; j < i; j++)
			if(abs(k - a[j]) > abs(k - a[j + 1]))
				swap( a[j], a[j + 1]);
				
}
int main()
{
	int t;
	cin >> t;
	while( t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sapxep();
		for(int i = 1; i <= n; i++) cout << a[i] << " ";
		cout << endl;
	}
}
