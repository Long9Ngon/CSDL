#include<bits/stdc++.h>
using namespace std;

struct init {
	int f, e; 
}; 

init h[1001];

bool cmp(init a, init b)
{
	return a.e < b.e;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) cin >> h[i].f;
		for(int i = 0; i < n; i++) cin >> h[i].e;
		sort(h, h + n, cmp);
		int dem = 1, i =0;
		for(int j = 1; j < n; j++)
		{
			if(h[j].f >= h[i].e)
			{
				dem ++;
				i = j;
			}
		}
		cout << dem << endl;
	}
	return 0;
}

