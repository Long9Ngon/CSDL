#include<bits/stdc++.h>
#define m 1000000007;
using namespace std;
int a[10000000];
int main() {
	int T; cin >> T;
	while (T--) {
	int n;
	cin>>n;
	
	for(int i = 0; i < n; i++)	cin>>a[i]; 
	
	sort( a , a + n );
	long sum = 0;
	
	for(int i = 0; i < n; i++)
		sum = (sum+(a[i]*i))%m;
	cout<<sum<<endl;
	}
	return 0;
}

