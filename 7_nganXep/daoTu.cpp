#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s;
		getline(cin, s);
		s = s + ' ';
		string b;
		stack <string> a;
		
		for(int i = 0; i < s.size(); i++) 
		{
			if(s[i] != ' ') b = b + s[i];
			if(s[i] == ' ')
			{
				a.push(b);
				b.clear();
			}
		}
		
		while(a.size() > 0)
		{
			cout << a.top() << " ";
			a.pop();
		}
		
		cout << endl;
	}
	return 0;
}

