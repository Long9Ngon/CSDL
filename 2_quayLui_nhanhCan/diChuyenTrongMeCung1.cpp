#include<bits/stdc++.h>
using namespace std;

int a[11][11];
int n;
bool kt;
vector <string> res;

void init()
{
	cin >> n;
	for( int i = 1; i <= n; i++)
		for( int j = 1; j <= n; j++)
			cin >> a[i][j];
	kt = false;
	res.clear();
}

void Try(int i, int j, string f)
{
	if(i == 1 && j == 1 && a[i][j] == 0)
		return;
	if( i == n && j == n && a[n][n] == 1)
	{
		res.push_back(f);
		kt = true;
		return;
	}
	if( i < n && a[i+1][j] == 1)
		Try(i+1, j, f + "D");
	if( j < n && a[i][j+1] == 1)
		Try(i, j+1, f + "R");
	if((i < n && j < n && a[i][j+1] == 0 && a[i+1][j] == 0) || i > n || j > n)
		return;
}

int main() {
	int T; cin >> T;
	while (T--) {
		init();
		Try(1, 1, "");
		if(kt == false) cout << "-1";
		else 
		{
			sort( res.begin(), res.end());	
			for(int i = 0; i < res.size(); i++) cout << res[i] <<" ";		
		}
		cout << endl;
	}
	return 0;
}

