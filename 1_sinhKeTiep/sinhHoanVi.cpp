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
#define MAX 11
using namespace std;
int X[MAX],n,ok;
void Init(void)
{
	cin>>n;
	ok=true;
	for(int i=1;i<=n;i++) X[i]=i;
}
void Resuilt(void)
{
	for(int i=1;i<=n;i++) cout<<X[i];
	cout<<" ";
}
void hoanViKeTiep(void)
{
	int j=n-1;
	while(j>0&&X[j]>X[j+1]) j--;
	if(j>0)
	{
		int k=n;
		while(k>0&&X[j]>X[k]) k--;
		int t=X[j];X[j]=X[k];X[k]=t;
		int l=j+1,r=n;
		while(l<=r)
		{
			t=X[l];X[l]=X[r];X[r]=t;
			l++;r--;
		}
	}
	else ok=false;
}
void sinhHoanVi(void)
{
	Init();
	while(ok)
	{
		Resuilt();
		hoanViKeTiep();
	}
	cout<<endl;
}
int main() {
	int T; cin >> T;
	while (T--) {
		sinhHoanVi()  ;
	}
	return 0;
}

