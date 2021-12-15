
#include<bits/stdc++.h>
#define Max 16
using namespace std;
int X[Max],n,k,ok,ghi=0;
string Y; 
void init(void)
{
	ok=true;
	cin>>n>>k;
	for(int i=1;i<=n;i++) X[i]=0;
}
void result(void)
{
	for(int i=1;i<=n;i++)
	{
		if(X[i]==0) Y.push_back('A');
		else Y.push_back('B');
	}
}
void sinhNhiPhan(void)
{
	int j=n;
	while(j>0&&X[j]==1)
	{
		X[j]=0;
		j--;
	}
	if(j>0) X[j]=1;
	else ok=false;
}
void xauABDacBiet(void)
{
	init();
	while(ok)
	{
		int dem=0,test=0;
		for(int i=1;i<=n;i++)
		{
			if(X[i]==0) dem++;
			if(X[i]==1) dem=0;
			if(dem==k) test++;
			if(dem>k){
				test=0;
				break;
			}
		}
		if(test==1) {
			ghi++;
			result();
		}
		sinhNhiPhan();
	}
}
int main() {
	xauABDacBiet();
	cout<<ghi<<endl;
	for(int i=0;i<Y.length();i++)
	{
		cout<<Y[i]; 
		if((i+1)%n==0)cout<<endl;
	}
	return 0;
}

