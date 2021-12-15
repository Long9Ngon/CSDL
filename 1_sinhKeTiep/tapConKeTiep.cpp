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
void Next_Combination(void){
	int i=k; 
	while(i>0 && X[i]==n-k+i) { 
		i--; 
	}
	if(i>0) { 
		X[i]=X[i] + 1; 
		for(int j=i+1; j<=k; j++) 
			X[j] = X[i] + j - i;
	}
	else { 
		for(int i=1; i<=k; i++) X[i]=i;
	}		
}
int main(void) {
	int T; cin>>T;
	while(T--) 
	{ 
		Init(); 
		Next_Combination();
		Result();
	}
}
