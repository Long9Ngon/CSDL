	#include<bits/stdc++.h>
	using namespace std;
	
	const long long mod = 1e9 + 7;
	long long n, k;
	long long cost;
	
	struct tang{
		bool operator() (long long a, long long b) {
			return a >= b;
		}
	};
	
	priority_queue <long long, vector<long long>, tang> x;
	
	void init(){
		cin >> n;
		cost = 0;
		for( int i = 0; i < n; i++)
		{
			cin >> k;
			x.push(k);
		}
	}
	
	void solve(){
		while(x.size() > 1)
		{
			long long a = x.top();
			x.pop();
			long long b = x.top();
			x.pop();
			long long c = (a%mod + b%mod) % mod;
			x.push(c);
			cost += (c);
			cost = cost % mod;
		}
		while(x.size() != 0) x.pop();
	}
	
	int main(){
		int test;
		cin >> test;
		while( test--)
		{
			init();
			solve();
			cout << cost << endl; 
		}
		return 0;
	}
