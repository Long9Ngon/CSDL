#include<bits/stdc++.h>
using namespace std;

int a[10], x[10];
int n, k;
vector < vector<int> > res;
void init()
{
	res.clear();
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
}

void Try(int i)
{
	for(int j = 1; j >= 0; j--)
	{
		x[i] = j;
		if(i == n - 1)
		{
			int sum = 0;
			for(int z = 0; z < n; z++)
				if(x[z] == 1) sum += a[z];
			if(sum == k) 
			{
				vector <int> add;
				for(int z = 0; z < n; z++)
					if(x[z]) add.push_back(a[z]);
				res.push_back(add);
			}
		}
		else Try( i + 1); 
	}
}

int main() {
	int T; cin >> T;
	while (T--) 
	{
		init();
		Try(0);
		if( res.size() == 0) cout << "-1" << endl;
		else
		{
			sort( res.begin(), res.end());
			for(int i = 0; i < res.size(); i++)
			{
				cout << '[';
				for(int j = 0; j < res[i].size() - 1; j++ )
					cout << res[i][j] << " ";
				cout << res[i][res[i].size() - 1] << ']';
				cout << " "; 
			}
		} 
		cout << endl;
	}
	return 0;
}

