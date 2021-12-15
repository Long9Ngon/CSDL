#include<bits/stdc++.h>
using namespace std;
int main() {
	int T; cin >> T;
	while (T--) {
		int s, d;
		cin >> s >> d;
		stack <int> snn;
		
		while(s > 0)
		{
			d--;
			if(s > 9)
			{
				snn.push(9);
				s -= 9;
			}
			else
			{
				snn.push(s);
				break;
			}
		}
		
		if(d < 0) cout << "-1";
		else
		{
			if(d > 0)
			{
				int f = snn.top();
				snn.pop();
				snn.push(f - 1);
				while(d > 1)
				{
					snn.push(0);
					d--;
				}
				snn.push(1);
			}
			while(snn.size() > 0)
			{
				cout << snn.top();
				snn.pop();
			}
		}
		cout << endl;
	}
	return 0;
}

