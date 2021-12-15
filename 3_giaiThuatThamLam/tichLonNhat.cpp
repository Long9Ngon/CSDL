#include<bits/stdc++.h>
using namespace std;

int a[1001];

int main() {
	int n;
	long b[4] = {0};
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);

	b[0] = a[0] * a[1];
	b[1] = a[0] * a[1] * a[n-1];
	b[2] = a[n-1] * a[n-2];
	b[3] = a[n-1] * a[n-2] * a[n-3];
	sort(b, b + 4);
	cout << b[3] << endl;
	return 0;
}

