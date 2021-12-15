#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	cin.ignore();
	int a[n+1][n+1]={0};
	string s;
	for (int i=1;i<=n;i++){
		getline(cin, s);
		s += ' '; 
		int res = 0 ;
		for(int j = 0; j < s.size(); j++)
		{
			if(s[j] == ' ')
			{
				a[i][res] = 1;
				res = 0;
				continue; 
			}
			res = res*10 + (int)(s[j] - '0');
		}
	}	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

