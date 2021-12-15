#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<cmath>
#include<set>
#include<algorithm>
#define ll long long
using namespace std;
const int oo = 1e5+5;
int A[oo], B[oo], C[5] = {0};
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int test; cin >> test;
	while(test--){
		int n, m; cin >> n >> m;
		C[0] = 0; C[1] = 0; C[2] = 0;
		for(int i=0; i<n; i++) cin >> A[i];
		for(int i=0; i<m; i++){
			cin >> B[i];
			if(B[i] == 1 || B[i] == 2 || B[i] == 0) C[B[i]]++;
		}
		sort(B, B+m);
		ll count = 0;
		for(int i=0; i<n; i++){
			if(A[i] == 0);
			else if(A[i] == 1) count += C[0];
			else if(A[i] == 2){
				count += C[0]; count += C[1];
				int *p = upper_bound(B, B+m, 4);
				count += ((B+m) - p);
			}
			else if(A[i] == 3){
				count += C[0]; count += C[1]; count += C[2];
				int *p = upper_bound(B, B+m, 3);
				count += ((B+m)-p);
			}
			else{
				count += C[0]; count += C[1];
				int *p = upper_bound(B, B+m, A[i]);
				count += ((B+m)-p);
			}
		}
		cout << count << endl;
	}
}
