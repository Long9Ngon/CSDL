//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int T; cin >> T;
//	while (T--) {
//		int n1, n2, n3, check = 0;
//		cin >> n1 >> n2 >> n3;
//		long long a[n1], b[n2], c[n3];
//		
//		for(int i = 0 ; i < n1; i++) cin >> a[i];
//		for(int i = 0 ; i < n2; i++) cin >> b[i];
//		for(int i = 0 ; i < n3; i++) cin >> c[i];
//	
//		sort(a, a + n1);
//		sort(b, b + n2);
//		sort(c, c + n3);
//		
//		for(int i =0; i < n1; i++)
//		{
//			bool kt1 = binary_search(b, b + n2, a[i]);
//			bool kt2 = binary_search(c, c + n3, a[i]);
//			if(kt1 && kt2)
//			{
//				cout << a[i] << " ";
//				check = 1;
//			}
//		}
//		if(check == 0) cout << "-1";
//		cout << endl;
//	}
//	return 0;
//}

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
		{
			sort(e.begin(), e.end());
			for(int i = 0; i < e.size(); i++ ) cout << e[i] << " ";
		}
		else cout << "-1";
		cout << endl;
	}
	return 0;
}

