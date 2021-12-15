#include<bits/stdc++.h>
using namespace std;

int a[100000];
int main() {
	int test;
	cin >> test;
	while ( test--)
	{
		int n;
		cin >> n;
		for( int i = 1; i <= n; i++ ) cin >> a[i];
		for(int i = 1; i <= n; i++)
		{
			int kt = 0;
			for(int j = i + 1; j <= n; j++)
			{
				if(a[j] > a[i])
				{
					kt = 1;
					cout << a[j] << " ";
					break;
				}
			}
			if( kt == 0) cout << "-1 "; 
		}
		cout << endl;
	}
	return 0;
}

