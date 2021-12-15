#include<bits/stdc++.h>
using namespace std;

struct init 
{
	int stt, de, pr;
};

init h[1001];

bool cmp(init a, init b)
{
	return a.pr > b.pr;
 } 
 
int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) cin >> h[i].stt >> h[i].de >> h[i].pr;
		sort(h, h + n, cmp);
		int f[1001] = {0};
		int dem = 0, lai = 0;
		for(int i = 0; i < n; i++)
		{
			while(f[h[i].de] && h[i].de > 0) h[i].de--;
			if(!f[h[i].de] && h[i].de > 0)
			{
				f[h[i].de] = 1;
				dem++;
				lai += h[i].pr;
			}
		}
		cout << dem << " " << lai << endl;
	}
	return 0;
}

