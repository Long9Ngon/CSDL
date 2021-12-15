#include<bits/stdc++.h>
using namespace std;

int a[100001];

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		stack <int> res;
		for(int i = 0; i < n; i++)
		{
			while(!res.empty())
			{
				if(a[i] >= a[res.top()]) res.pop();
				else break;
			}
			if(res.size() > 0) cout << i - res.top() << " ";
			else cout << i + 1 << " ";
			res.push(i);
		}
		cout << endl;
	}
	return 0;
}

