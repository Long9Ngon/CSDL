#include<bits/stdc++.h>
using namespace std;

vector <unsigned long> res;

int main() {
	int T; cin >> T;
	res.push_back(1);
	int i2 = 0, i3 = 0, i5 = 0;
		for(int i = 0; i < 10001; i++)
		{
			unsigned long u2 = res[i2] * 2;
			unsigned long u3 = res[i3] * 3;
			unsigned long u5 = res[i5] * 5;
			unsigned long next_ugly = min({u2, u3, u5});
			if(next_ugly == u2) i2++;
			if(next_ugly == u3) i3++;
			if(next_ugly == u5) i5++;
			if(next_ugly == res[i - 1]) continue;
			res.push_back(next_ugly);
		}
		//sort(res.begin(),res.end()); 
	while (T--) {
		//for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
	
		int n;
		cin >> n;
		cout << res[n-1] << endl;
	}
	return 0;
}

