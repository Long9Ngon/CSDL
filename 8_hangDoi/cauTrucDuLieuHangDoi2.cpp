#include<bits/stdc++.h>
using namespace std;
int main() {
	int q;
	cin >> q;
	string s;
	queue <int> luu;
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
		
		else if(s == "PRINTFRONT")
		{
			if(luu.size() > 0) cout << luu.front() << endl;
			else cout << "NONE\n";
		}
	}
	return 0;
}

