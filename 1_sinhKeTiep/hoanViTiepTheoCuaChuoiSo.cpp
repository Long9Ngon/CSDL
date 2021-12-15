/*
 Pham Xuan Long
 B19DCAT117
 23
 35
 D19CQAT01-B
 Long Pham
 phamlongthd@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
string X;
int stt;
void init(void)
{
	cin>>stt>>X;
 }
void result(void)
{
 	cout<<stt<<" ";
 	for(int i=0;i<X.size();i++)
 		cout<<X[i];
} 
void hoanViTiep(void)
{
	int j= X.size()-1;
	while(j>0&&X[j]-'0'>=X[j+1]-'0') j--;
	if(j>0)
	{
		int k=X.size();
		char t;
		while(X[j]-'0'>=X[k]-'0') k--;
		t=X[j];X[j]=X[k];X[k]=t;	
		int l=j+1,r=X.size()-1;
		while(l<r)
		{
			t=X[l];X[l]=X[r];X[r]=t;
			l++;r--;
		}
		result();
	} 
	else
		cout<<stt<<" BIGGEST";
	
}
int main() {
	int T; cin >> T;
	while (T--) {
		init()  ;
		hoanViTiep();
		cout<<endl;
	}
	return 0;
}

