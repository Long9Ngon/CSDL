#include<bits/stdc++.h>
using namespace std;

int a[100];
int main()
{
	int test;
	cin >> test;
	while( test--)
	{
		int n, sum = 0;
		cin >> n;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2 != 0) cout << "NO";
		else
		{
			int s = sum/2;
			int dp[s+1];
			dp[s + 1] = 0;
			dp[0] = 1;
			for( int i = 0; i < n; i++)
				for( int j = s; j >= a[i]; j--)
					if(dp[j-a[i]] == 1) dp[j] = 1;
			if(dp[s]) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
}
