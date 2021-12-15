#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n, s, m;
		cin >> n >> s >> m;
		if(s > 6)
		{
			if(n < m || (n-m)*6 < m) cout << "-1";
			else
			{
				if((s*m) % n == 0) cout << (s*m)/n;
				else cout << (s*m)/n + 1;
			}
		}
		else
		{
			if(n < m) cout << "-1";
			else
			{
				if((s*m) % n == 0) cout << (s*m)/n;
				else cout << (s*m)/n + 1;
			}
		}
		cout << endl;
	}
	return 0;
}

