//#include <bits/stdc++.h>
//using namespace std;
//int X[21], n, k,s, OK,dem,tong;
//void Init(void) {
//	cin>>n>>k>>s; 
//	OK = true;
//	dem=0;
//	for(int i=1;i<=k; i++) 
//		X[i] =i;
//}
//void Next_Combination(void){
//	int i=k; 
//	while(i>0 && X[i]==n-k+i) { 
//		i--; 
//	}
//	if(i>0) { 
//		X[i]=X[i] + 1; 
//		for(int j=i+1; j<=k; j++) 
//			X[j] = X[i] + j - i;
//	}
//	else 
//		OK = false;
//}
//void check()
//{
//	tong =0;
//	for(int i=1;i<=k;i++) tong+= X[i];
//	if(tong == s) dem++; 
// } 
//int main(void) {
//	int T=100;
//	while(T--) {
//		Init();
//		if(n==0&&k==0&&s==0) break;
//		if(n<k) cout<<"0\n";
//		else
//		{
//			while(OK) 
//			{  
//				check(); 
//				cout << tong<<" ";
//				Next_Combination(); 
//			}
//			cout<<dem<<endl;
//		}		
//	}
//}
#include<bits/stdc++.h>
using namespace std;

int n , k , s , dem;
int a[11];

void Try(int x) {
    if(x > k) {
		int tong = 0;
		for(int i=1 ; i<=k ; i++) tong += a[i];
		if(tong == s) dem++;
		return;
	}
	for(int i= a[x-1] + 1 ; i<=n-k+x ; i++) {
		a[x] = i;
		Try(x+1);
	}
}
int main() {
	int test = 100;
	while(test--) {
		cin >> n >> k >> s;
		if( n == 0 && k == 0 && s == 0) {
			break;
		}
		else {
			dem = 0;
		    Try(1);
		    cout << dem << endl;
		}
	}
}
