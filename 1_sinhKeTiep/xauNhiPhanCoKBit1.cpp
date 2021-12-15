
#include <bits/stdc++.h>
#define MAX 16
using namespace std;
int X[MAX], n,k, OK,kt; 
void Init(void) {
	cin>>n>>k; OK = true;
	for(int i=0; i<n; i++) X[i] =0;
}
void Result(void) {
	for(int i=0; i<n; i++) {
		cout<<X[i];
	}
	cout<<"\n";
}
void check(void)
{
	int dem=0;
	for(int i=0;i<n;i++) 
		if(X[i]==1) dem++;
	if(dem==k) Result();
}
void Next_Bits_String(void) {
	int i = n-1;
	while(i>=0 && X[i]) { 
		X[i]=0; i--; 
	}
	if(i>=0) X[i] =1;
	else OK = false; 
}
//Duyet Xau nhi phan
void Binary_String(void) {
	Init();//thiet lap xau dau tien
	while(OK) { //lap khi chua phai xau cuoi cung
		check();
		Next_Bits_String();//sinh ra xau ke tiep
	}
	cout<<endl;//ket thuc mot test
}
int main(void) {
	int T; cin>>T;
	while(T--){
		Binary_String();
	}
}
