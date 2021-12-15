#include<bits/stdc++.h>
using namespace std;
int X[20];
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>X[i];
		sort(X,X+n);
		long x=0,y=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0) x=x*10+X[i];
			else y=y*10+X[i];
		 } 
		cout<<x+y<<endl;
	}
	return 0;
}

