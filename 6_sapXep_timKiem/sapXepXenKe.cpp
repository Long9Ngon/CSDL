#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n,a[1000];
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0; i<n/2; i++) cout<<a[n-i-1]<<" "<<a[i]<<" ";
		if(n%2==0) cout<<endl;
		else cout<<a[n/2]<<endl;
	}
	return 0;
}

