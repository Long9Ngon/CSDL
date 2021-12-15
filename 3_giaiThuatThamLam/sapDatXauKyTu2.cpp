#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int d;
		cin >> d;
		string s;
		cin >> s;
		int dem[300] = {0};
		int res = 0;
		for(int i = 0; i < s.size(); i ++)
		{
			dem[s[i]]++;
			if(res < dem[s[i]]) res = dem[s[i]];
		}
		if((res - 1)*(d - 1) > s.size() - res) cout << "-1";
		else cout << "1";
		cout << endl;
	}
	return 0;
}

