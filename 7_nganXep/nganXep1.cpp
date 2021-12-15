#include<bits/stdc++.h>
using namespace std;
int main() {
	stack <int> luu;
	string s;
	while(cin >> s)
	{
		if(s == "push")
		{
			int n;
			cin >> n;
			luu.push(n);
		}
		if(s == "pop") luu.pop();
		if(s == "show")
		{
			vector <int> ra;
			if(luu.size() == 0) cout << "empty\n";
			else
			{
				while(luu.size() > 0)
				{
					ra.push_back(luu.top());
					luu.pop();
				}
				for(int i = ra.size() - 1; i >= 0; i--)
				{
					cout << ra[i] << " ";
					luu.push(ra[i]);
				}
				cout << endl;
			}
		}
	}
	return 0;
}

