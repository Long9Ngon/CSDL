#include<bits/stdc++.h>
using namespace std;

int main() {
	bool a[1000001];
	for(int i = 2; i < 1000001; i++) a[i] = true;
	for(int i = 2; i < 1000001; i++)
	{
		if(a[i])
			for(int j = i*2; j < 1000001; j = j + i) a[j] = false;
	}
	int T; cin >> T;
	while (T--) {
		int n, check = 0;
		cin >> n;
		for(int i = 2; i < n; i++)
			if(a[i] && a[n - i])
			{
				cout << i << " " << n - i << endl;
				check = 1;
				break;
			}
		if(check == 0) cout << "-1" << endl;
	}
	return 0;
}

