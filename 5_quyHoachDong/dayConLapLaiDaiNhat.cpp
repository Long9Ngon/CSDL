//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int T; cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		string s;
//		cin >> s;
//		int a[300] = {0};
//		int max = 0;
//		for(int i = 0; i < s.size(); i++) a[s[i]] ++;
//		for(int i = 0; i < s.size(); i++) 
//		{
//			if(a[s[i]] > 0)
//				max = max + a[s[i]] - 1;
//			a[s[i]] = 0;
//		}
//		cout << max << endl;	
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int dp[101][101];
		for(int i = 0; i < 101; i++)
		{
			dp[i][0] = 0;
			dp[0][i] = 0;
		}
		int result = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(s[i-1] == s[j-1] && i != j) dp[i][j] = dp[i-1][j-1] + 1;
				else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				result = max(result,dp[i][j]);
			}
		 } 
		cout << result << endl; 
	}
}

