#include<bits/stdc++.h>
using namespace std;

int k;
string s;
int main() {
	int T; cin >> T;
	while (T--) {
		cin >> k >> s;
		for(int i = 0; i < s.size(); i++)
		{
			if(k == 0) break;
			char max = s.size() - 1;
			int vt = s.size() - 1;
			for(int j = s.size() - 1; j > i; j--)
				if(max < s[j]) 
				{
					max = s[j];
					vt = j;
				}
			if(max > s[i])
			{
//				for(int l = vt; l > i; l--)
//					swap(s[l], s[l-1]);
				swap(s[i], s[vt]);
				k--;
			}	
		}
		for(int i = 0; i < s.size(); i++) cout << s[i];
		cout << endl;
	}
	return 0;
}

