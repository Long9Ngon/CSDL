#include <bits/stdc++.h> 
using namespace std;
int X[1000], n, k;
void Init(void) {
	cin>>n>>k;
	for(int i=1;i<=k; i++) cin>>X[i];		
}
void Result(void) {
	for(int i=1; i<=k; i++) 
		cout<<X[i]<<" ";
	cout<<endl;
}
void tapConLienPhiaTruoc(void){
	int i=k; 
	while(i>0 && X[i]==n-k+i) i--; 
	if(i==k) 
	{ 
		while(X[i]==X[i-1]+1&&i>0) i--;
		if(i==0) X[i]==X[i];
		else X[i]--;
		for(int j=i+1;j<=k;j++)
			X[j]=n-k+j;
	}
	else { 
		int i=k;
		while(X[i]==X[i-1]+1) i--;
		X[i]--;
	}		
}
int main(void) {
	int T; cin>>T;
	while(T--) 
	{ 
		Init(); 
		tapConLienPhiaTruoc();
		Result();
	}
}
