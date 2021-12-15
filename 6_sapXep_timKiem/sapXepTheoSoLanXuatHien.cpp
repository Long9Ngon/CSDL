#include<bits/stdc++.h>
using namespace std;

struct init{
	int gt, ts;
}; 

bool cmp(init a, init b)
{
	if(a.ts > b.ts) return true;
	if(a.ts == b.ts && a.gt < b.gt) return true;
	return false;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		init a[n];
		int d[100001] = {0};
		
		for(int i = 0; i < n; i++)
		{
			cin >> a[i].gt;
			d[a[i].gt]++;
		}
		
		for(int i = 0; i < n; i++) a[i].ts = d[a[i].gt];
		
		sort(a, a + n, cmp);
		
		for(int i = 0; i < n; i++) cout << a[i].gt << " ";
		cout << endl;
	}
	return 0;
}

