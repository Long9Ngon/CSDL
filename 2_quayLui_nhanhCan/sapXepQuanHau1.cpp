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
int n,X[11],cot[11],xuoi[19],nguoc[19],dem;
void init(void)
{
	cin>>n;
	dem=0;
	for(int i=1;i<=n;i++)
		cot[i]=true;
	for(int i=1;i<=2*n-1;i++)
	{
		xuoi[i]=true;
		nguoc[i]=true;
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1])
		{
			X[i]=j;
			cot[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n) dem++;
			else Try(i+1);
			cot[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;
		}
	}
}
int main() {
	int T; cin >> T;
	while (T--) {
		init();
		Try(1);
		cout<<dem<<endl;
	}
	return 0;
}

