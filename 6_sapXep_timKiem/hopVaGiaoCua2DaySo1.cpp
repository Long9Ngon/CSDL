#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		int a[100001] = {0};
		
		for(int i = 0; i < m+n; i++)
		{
			int b;
			cin >> b;
			a[b] ++;
		}
		
		for(int i = 0; i < 100001; i++)
		{
			if(a[i] > 0) cout << i << " ";
		}
		cout << endl;
		
		for (int i = 0; i < 100001; i++)
		{
			if(a[i] > 1) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

