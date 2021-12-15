#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int truoc, sau;
		cin>>truoc>>sau;
		vector<int>dp(sau+truoc,0);
		for(int i=1;i<=truoc;i++) dp[i]=truoc-i;
		for(int i=truoc+1;i<=sau;i++) 
			if(i&1) dp[i]=dp[(i+1)/2]+2;
			else dp[i]=dp[i/2]+1;
		cout<<dp[sau]<<endl;
	}	
}
