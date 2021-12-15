#include<bits/stdc++.h>
using namespace std;
int main() {
	int q;
	cin >> q;
	string s;
	stack <int> luu;
	while(q--)
	{
		cin >> s;
		if(s == "PUSH")
		{
			int n;
			cin >> n;
			luu.push(n);
		}
		else if(s == "POP" && luu.size() > 0) luu.pop();
		else if(s == "PRINT")
		{
			if(luu.size() == 0) cout << "NONE\n";
			else cout << luu.top() << endl;
		}
	}
	return 0;
}

