#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v;
		int x=0;
		e=v-1;
		int d[max]={0};
		while (e--){
			int a,b;
			cin>>a>>b;
			d[b]++;
		}
		for (int i=1;i<=v;i++)
			if (d[i])
			 {
			 	x++;
			 }
		if (x==v-1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	} 
}
