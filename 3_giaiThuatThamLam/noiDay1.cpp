#include<bits/stdc++.h>
using namespace std;

int n, k;
long cost;

struct tang{
	bool operator() (long a, long b) {
		return a >= b;
	}
};

priority_queue <long, vector<long>, tang> x;

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
		long a = x.top();
		x.pop();
		long b = x.top();
		x.pop();
		x.push( a + b);
		cost += ( a + b);
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
