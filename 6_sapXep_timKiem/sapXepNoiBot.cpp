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
int X[101],n;
using namespace std;
void init(void)
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>X[i];
}
void result(void)
{
	for(int i=0;i<n;i++ ) cout<<X[i]<<" ";
	cout<<endl;
}
void noiBot(void)
{
	int dem = 1;
	for(int i=n-1;i>0;i--)
	{
		int kt =0; 
		for(int j=0;j<i;j++)
		{
			if(X[j]>X[j+1])
			{
				swap(X[j],X[j+1]);
				kt = 1; 
			}
		}
		if(kt==1) 
		{
			cout<<"Buoc "<<dem<<": ";
			result();
		}
		dem++;
	}
}
int main() {
		init()  ;
		noiBot();
	return 0;
}
 
