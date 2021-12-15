#include<bits/stdc++.h>
using namespace std;
int x[50];
int main() {
	int T; cin >> T;
	while (T--) {
	int n,k;
	cin>>n>>k; 
	for(int i=0; i<n; i++) cin>>x[i];
	sort(x,x+n);
	int kq=0;
	if(k<n-k)
	{
		for(int i=0; i<k; i++)
			kq-=x[i];
		for(int i=k; i<n; i++)
			kq+=x[i];
	}
	else
	{
		for(int i=0; i<n-k; i++)
			kq-=x[i];
		for(int i=n-k; i<n; i++)
			kq+=x[i];
	}
	cout<<kq<<endl;
	}
	return 0;
}

