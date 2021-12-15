#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[11][11];
int x[11];
bool ok[11];
vector <int> res;

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!ok[j])
		{
			x[i] = j;
			ok[j] = true;
			if(i == n)
			{
				int sum = 0;
				for(int l = 1; l <= n; l++)
					sum += a[l][x[l]];
				if(sum == k)
				{
					for(int l = 1; l <= n; l++)
						res.push_back(x[l]);
				}
			}
			else Try(i+1);
			ok[j] = false;
		}
	}
}
 
int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	Try(1);
	cout << res.size()/n;
	for(int i = 0; i < res.size(); i++)
	{
		if(i % n == 0) cout << endl;
		cout << res[i] << " ";
	}
	return 0;
}

