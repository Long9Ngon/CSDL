#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long p, q;
		cin >> p >> q;
		long long res;
		while(1)
		{
			if(q%p == 0)
			{
				cout << "1/" << q/p << endl;
				break;
			}
			else
			{
				res = q/p + 1;
				cout << "1/" << res << " + ";
				p = res*p - q;
				q = q*res;
			}
		}
	}
	return 0;
}

