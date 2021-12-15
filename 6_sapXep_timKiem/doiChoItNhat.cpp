#include<bits/stdc++.h>
using namespace std;

int a[1001];
int n;

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		int vt, dem = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
	
		for(int i = 0; i < n - 1; i++)
		{
			int min = a[i];
			for(int j = i + 1; j < n; j++)
			{
				if(min > a[j])
				{
					min = a[j];
					vt = j;
				}
			}
			if(min < a[i]) 
			{
				swap(a[i], a[vt]);
				dem ++;
			}
		}
		cout << dem << endl;  
	}
	return 0;
}

