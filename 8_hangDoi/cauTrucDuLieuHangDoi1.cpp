#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n,b;
		cin >> n;
		queue <int> luu;
		while(n--)
		{
			int a;
			cin >> a;
			if(a == 1) cout << luu.size() << endl;
			
			else if(a == 2) 
			{
				if(luu.size() == 0) cout << "YES\n";
				else cout << "NO\n";
			}
			
			else if(a == 3)
			{
				cin >> b;
				luu.push(b);
			}
			
			else if(a == 4 && luu.size() > 0) luu.pop();
			
			else if(a == 5)
			{
				if(luu.size() > 0)
					cout << luu.front() << endl;
				else cout << "-1\n";
			}
			
			else if(a == 6) 
			{
				if(luu.size() > 0)
					cout << b << endl;
				else cout << "-1\n";
			}
		}

	}
	return 0;
}

