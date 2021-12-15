#include<bits/stdc++.h>
using namespace std;

int a[9][9];
bool check[9][9];
int n;
vector <string> res;

void init()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			check[i][j] = false;
		}
	res.clear();
}

void Try(int i, int j, string f)
{
	if(a[1][1] == 0 || a[n][n] == 0) return;
	if(i == n && j == n) 
	{
		res.push_back(f);
		return;
	}
	if(i < n && a[i+1][j] && !check[i+1][j])
	{
		check[i][j] = true;
		Try(i + 1, j, f + "D");
		check[i][j] = false;
	}
	if(j < n && a[i][j+1] && !check[i][j+1])
	{
		check[i][j] = true;
		Try(i, j + 1, f + "R");
		check[i][j] = false;
	}
	if(i > 1 && a[i-1][j] && !check[i-1][j])
	{
		check[i][j] = true;
		Try(i - 1, j, f + "U");
		check[i][j] = false;
	}
	if(j > 1 && a[i][j-1] && !check[i][j-1])
	{
		check[i][j] = true;
		Try(i, j - 1, f + "L");
		check[i][j] = false;
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		init();
		Try(1, 1, "");
		if(res.size() == 0) cout << "-1";
		else
		{
			sort(res.begin(), res.end());
			for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

