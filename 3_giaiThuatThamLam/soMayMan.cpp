#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector <int> a;
		while(n > 3)
		{
			if(n%7 != 0)
			{
				a.push_back(4);
				n = n - 4;
			}
			else
			{
				for(int i = 1; i <= n/7; i++)
				{
					a.push_back(7);
				}
				n = 0;
			}
		}
		if(n == 0)
		{
			for(int i = 0; i < a.size(); i++) cout << a[i];
		}
		else cout << "-1";
		cout << endl;
	}
	return 0;
}

