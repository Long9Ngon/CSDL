#include <bits/stdc++.h>
using namespace std;
int X[12], n, k, OK;
void Init(void) {
	cin>>n>>k; 
	OK = true;
	for(int i=1;i<=k; i++) 
		X[i] =i;
}
void Result(void) {
	for(int i=1; i<=k; i++) cout<<X[i];
	cout<<" ";
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
	else 
		OK = false;
}
void Combination(void ) {
	Init();
	while(OK) { 
		Result();
		Next_Combination(); 
	}
	cout<<endl;
}
int main(void) {
	int T; cin>>T;
	while(T--) {
		Combination();
	}
}
