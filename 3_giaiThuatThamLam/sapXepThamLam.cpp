#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		 }
		sort( b, b + n);
		int check = 1;
		for( int i = 0; i < n; i ++)
			if(a[i] != b[i] && a[i] != b[n - i - 1])
			{
				check = 0;
				break;
			 } 
		if(check == 1) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}

