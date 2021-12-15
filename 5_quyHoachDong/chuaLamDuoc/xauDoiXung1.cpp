#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005] = {};

void solve(){
	
	memset(dp, 0, sizeof(dp));
	
	string s1, s2;
	cin >> s1;
	s2 = s1;
	reverse(s2.begin(), s2.end());
	int size1 = s1.length(), size2 = s2.length();
	
	
//	vector<vector<int>> dp(size1 + 5, vector<int>(size2 + 5, 0));
	
	for(int i=1; i<=size1; i++){
		for(int j=1; j<=size2; j++){
			if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << size1 - dp[size1][size2] << endl;
	
	
}

int main(){
	
	int test = 1;
	cin >> test;
	while(test--) solve();
	
}
