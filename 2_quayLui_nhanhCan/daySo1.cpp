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
int A[11];
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>A[i];
		for(int i=1;i<=n;i++)
		{
			if(i==1) cout<<"[";
			if(i==n) cout<<A[i]<<"]"<<endl;
			else cout<<A[i]<<" ";
		}
		while(n > 1)
		{
			for(int i=1;i<n;i++)
			{
				A[i]=A[i]+A[i+1];
				if(i==1) cout<<"[";
				if(i==n-1) cout<<A[i]<<"]"<<endl;
				else cout<<A[i]<<" ";
			}
			n--;		
		}
		cout<<endl;	
	}
	return 0;
}

