#include<bits/stdc++.h>
using namespace std;

int n, x; 
int a[25];
vector <vector<int>> c;

void Try(int i, int sum, vector<int>b)
{
	if(sum > x) return;
	if(sum == x)
	{
		c.push_back(b);
		return;
	}
	for(int j = i; j <= n; j++)
	{
		if(sum + a[j] <= x)
		{
			b.push_back(a[j]);
			Try(j,sum+a[j],b);
			b.pop_back();
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> x;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		vector <int> res;
		res.clear();
		c.clear();
		Try(1,0,res);
		if(c.size() == 0) cout << -1;
		else
		{
			cout << c.size() << " ";
			for(int i = 0; i < c.size(); i++)
			{
				for(int j = 0; j < c[i].size(); j++)
				{
					if(j == 0) cout << "{";
					if(j == c[i].size() - 1) cout << c[i][j] << "}";
					else cout << c[i][j] << " ";
				}
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

