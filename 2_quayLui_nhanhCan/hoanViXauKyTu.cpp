
#include<bits/stdc++.h>
using namespace std;
int X[11],chuaxet[11];
string A;
int n;
void init(void)
{
	cin>>A;
	n=A.size()-1; 
	for(int i=0;i<A.size();i++)
	{
		X[i]=i;
		chuaxet[i]=true;
	}
} 
void result(void)
{
	for(int i=0;i<A.size();i++)
		cout<<A[X[i]];
		cout<<" ";
}
void Try(int i)
{
	for(int j=0;j<=n;j++)
	{
		if(chuaxet[j])
		{
			X[i]=j;
			chuaxet[j]=false;
			if(i==n) result();
			else Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main() {
	int T; cin >> T;
	while (T--) {
		init();
		Try(0)  ;
		cout<<endl;
	}
	return 0;
}

