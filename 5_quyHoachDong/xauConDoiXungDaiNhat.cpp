#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int dai = 1;
		for(int i = 0; i < s.size(); i++)
		{
			int l = i, r = i;
			while(l >= 0 && r < s.size())
			{
				if(s[l] == s[r])
				{
					dai = max(dai, r - l + 1);
					l--;
					r++;
				}
				else break;
			}
		}
		for(int i = 0; i < s.size(); i++)
		{
			int l = i, r = i + 1;
			while(l >= 0 && r < s.size())
			{
				if(s[l] == s[r])
				{
					dai = max(dai, r - l + 1);
					l--;
					r++;
				}
				else break;
			}
		}
		cout << dai << endl;
	}
	
	return 0;
}

