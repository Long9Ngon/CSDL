/** Coded by Pham Xuan Long **/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	int x[]={1,2,5,10,20,50,100,200,500,1000};
	while (T--) {
		int n,dem=0,i=10;
		cin>>n;
		while(n>0)
		{
			if(n>=x[i])
			{
				n=n-x[i];
				dem++;
			}
			if(n<x[i]) i--;
			
		}
		cout<<dem<<endl;
	}
	return 0;
}
