#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int dem[300] = {0};
		int res = 0;
		for( int i = 0; i < s.size(); i++)
		{
			dem[s[i]] ++;
			if(res < dem[s[i]]) res = dem[s[i]];
		}
		int n = s.size();
		if(2*res - n < 2) cout << "1";
		else cout << "-1";
		cout << endl;
	}
	return 0;
}

