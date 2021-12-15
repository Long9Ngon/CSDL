#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], dem;

void Try(int x) {
	for(int i= a[x-1] + 1 ; i<=n-k+x ; i++) {
		a[x] = i;
		if(x == k)
		{
			bool kt = true;
			for(int j = 1; j < k; j++) 
			{
				if(b[a[j]] > b[a[j+1]]) kt = false;
			}
			if(kt == true) dem++;
		}
		else
			Try(x+1);
	}
}

int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> b[i];
	dem = 0;
	Try(1);
	cout << dem << endl;
	return 0;
}

