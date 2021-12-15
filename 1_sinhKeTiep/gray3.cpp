#include<bits/stdc++.h>
using namespace std;

string s;

void binaryToGray()
{
	string g;
	g = g + s[0] ;
	for(int i = 1; i < s.size(); i++)
	{
		if(s[i] == s[i-1]) g = g + '0';
		else g = g + '1';
	}
	cout << g << endl;
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		binaryToGray();
	}
	return 0;
}

