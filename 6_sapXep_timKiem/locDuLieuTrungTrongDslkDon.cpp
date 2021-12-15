#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int d[100000] = {0};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		d[a[i]]++;
	}
	for(int i = 0; i < 100000; i++)
		if(d[a[i]] > 0) 
		{
			cout << a[i] << " ";
			d[a[i]] = 0;
		}
	return 0;
}

