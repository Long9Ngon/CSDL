#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		stack <string> res;
		for(int i = s.size()-1; i >= 0; i--)
		{
			if(s[i] == '[')
			{
				string r;
				
				while(res.top() != "]")
				{
					r += res.top();
					res.pop();
				}
				res.pop();
				int j = i - 1;
				int dem = 0;
				string f;
				
				while(j >= 0)
				{
					if(s[j] >= '0' && s[j] <= '9' )
					{
						f += s[j];
						j--;
						continue;
					}
					break;
				}
				
				for(int k = f.size() - 1; k >= 0; k--)
					dem = dem*10 + ((int) f[k] - '0');
				
				if(dem == 0) dem ++;
				
				while(dem > 0)
				{
					res.push(r);
					dem--;
				}
				continue;
			}
			
			if(s[i] >= '0' && s[i] <= '9') continue;
			res.push(string(1,s[i]));
		}
		
		
		while(res.size() > 0)
		{
			cout << res.top();
			res.pop();
		}
		cout << endl;
	}
	return 0;
}

