#include <bits/stdc++.h>
using namespace std;
int X[1001], n; 
void Init(void) {
	cin>>n; 
	for(int i=1; i<=n; i++) cin>>X[i];
}
void Result(void) {
	for(int i=1; i<=n; i++) cout<<X[i]<<" ";
	cout<<endl;
}
void Next_Permutation(void) {
	int j = n-1;
	while(j > 0 && X[j] > X[j+1]) { 
		j--; 
	}
	if(j>0) { 
		int k =n; 
		while(X[j]>X[k]) 
			k--;
		int t = X[j]; X[j]=X[k]; X[k]=t; 
		int r = j+1, s = n;
		while(r<=s) {
			t = X[r]; X[r]=X[s]; X[s]=t;			
			r++; s--;
		}
	}
	else {
		for(int i=1; i<=n; i++) X[i]=i;
	} 
}
int main(void) {
	int T; cin>>T;
	while(T--){
		Init();
		Next_Permutation();
		Result();
	}
}
