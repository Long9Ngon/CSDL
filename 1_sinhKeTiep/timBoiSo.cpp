#include<bits/stdc++.h>
using namespace std;

int n;

string boi()
{
	queue <string> s;
	s.push("9");
	while(s.size() > 0)
	{
		string f;
		long long res = 0;
		f = s.front();
		s.pop();
		for(int i = 0; i < f.size(); i++)
		{
			res = res*10 + (int)(f[i] - '0');
			res %= n;
		}
		if(res == 0) return f;
		s.push(f+'0');
		s.push(f+'9');
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		cout << boi() << endl;
	}
	return 0;
}

