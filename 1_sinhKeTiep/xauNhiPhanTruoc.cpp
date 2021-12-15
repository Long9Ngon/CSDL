#include<bits/stdc++.h>
using namespace std;

string s;

void frontbi()
{
	int i = s.size() - 1;
	while(i >= 0 && s[i] != '1'){
		s[i] = '1';
		i--;
	}
	if(i >= 0) s[i] = '0';
	cout << s << endl;
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		frontbi();
	}
	return 0;
}

