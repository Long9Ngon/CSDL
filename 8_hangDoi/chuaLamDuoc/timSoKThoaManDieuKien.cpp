#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool isSame(int n){
	vector<bool> vis(10, false);
	
	while(n > 0){
		int last_number = n % 10;
		if(vis[last_number]) return true;
		vis[last_number] = true;
		n /= 10;
	}
	return false;
}

bool isGreaterThanFive(int n){
	
	while(n > 0){
		int last_number = n % 10;
		if(last_number > 5) return true;
		n /= 10;
	}
	return false;
	
}


void solve(){
	
	int left, right;
	cin >> left >> right;
	
	int ans = 0;
	for(int i=left; i<=right; i++){
		
		if(!isSame(i) && !isGreaterThanFive(i)) ans++;
		
	}
	
	cout << ans << endl;
	
	
	
	
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int test = 1;
	cin >> test;
	while(test--) solve();
	
	
}
