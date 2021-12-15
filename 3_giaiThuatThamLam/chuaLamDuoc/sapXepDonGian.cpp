/** Coded by Pham Xuan Long **/

#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

#define ll long long



// len[i]: luu do dai day con co ket thuc la i
// index[i]: luu vi tri cua so i trong mang A


void solve(){
	
	int n;
	cin >> n;
	vector<int> A(n);
	
	vector<int> len(n + 5, 0), index(n + 5);
	
	for(int i=0; i<n; i++){
		cin >> A[i];
		index[A[i]] = i;
	}
	
	int len_max = 0;
	
	for(int i=0; i<n; i++){
		len[A[i]] = len[A[i] - 1] + 1;
		len_max = max(len_max, len[A[i]]);
	}
	
	cout << n - len_max << endl;
	
	
	
}


int main(){
	
	
	int test = 1;
//	cin >> test;
	while(test--) solve();
	
}

