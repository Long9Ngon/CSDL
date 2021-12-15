#include<bits/stdc++.h>

using namespace std;

#define ll long long


void solve(){
	
	ll start;
	cin >> start;
	
	queue<pair<int, int>> q; // first: gia tri, second: so buoc
	q.push({start, 0});
	
	map<int, bool> contains;
	contains[start] = true;
	
	int ans = 0;
	while(!q.empty()){
		
		auto p = q.front(); q.pop();
		int val = p.first, step = p.second;
		
		if(val == 1){
//			cout << "ues" << endl;
			ans = step;
			break;
		}
		
		if(contains[val - 1] == false){
			contains[val - 1] = true;
			q.push({val - 1, step + 1});
		}
		
		for(int i=2; i<=(int)sqrt(val); i++){
			if(val % i == 0){
				ll new_val = max(i, val / i);
				if(contains[new_val] == true){
					continue;
				}
				
				contains[new_val] = true;
				q.push({new_val, step + 1});
			}
		}
		
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
