#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, m, k;
		cin >> n >> m >> k;
		
		vector <long> a;
		vector <long> b;
		vector <long> c;
		vector <long> d;
		vector <long> e;
		
		for(int i = 0; i < n; i++) 
		{
			int j;
			cin >> j;
			a.push_back(j);
		}
		for(int i = 0; i < m; i++)
		{
			int j;
			cin >> j;
			b.push_back(j);
		}
		for(int i = 0; i < k; i++) 
		{
			int j;
			cin >> j;
			c.push_back(j);
		}
		
		set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(d));
		set_intersection(d.begin(), d.end(), c.begin(), c.end(), back_inserter(e));
		
		if(e.size() > 0)
			for(int i = 0; i < e.size(); i++ ) cout << e[i] << " ";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}

