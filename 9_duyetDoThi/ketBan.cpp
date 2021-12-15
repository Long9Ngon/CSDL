#include<bits/stdc++.h> 
using namespace std; 

vector<int> ke[100001]; 
bool check[100001]; 
int n, m, dem; 

void Bfs(int u) 
{ 
	queue<int> res;
	res.push(u);
	check[u] = true;
	while(!res.empty())
	{
		dem++;
		u = res.front(); res.pop();
		for(int i = 0; i < ke[u].size(); i++)
		{
			int s = ke[u][i]; 
			if(!check[s])
			{
				res.push(s);
				check[s] = true;
			}
		}
	 } 
} 

int main() 
{ 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; 
	cin>>t; 
	while(t--) 
	{ 
		for(int i=1; i <= n; i++) 
			ke[i].clear(); 
		memset(check, false, sizeof(check));
		cin>>n>>m; 
		for(int i=0; i<m; i++) 
		{ 
			int u, v; 
			cin>>u>>v; 
			ke[u].push_back(v); 
			ke[v].push_back(u); 
		} 
	//	for(int i=0; i<=n; i++) sort(ke[i].begin(), ke[i].end()); 
		int result = 0; 
		for(int i=1; i<=n; i++) 
		{ 
			dem=0; 
			for(int j=1; j<=n; j++) 
			check[j]=false; 
			Bfs(i); 
			result = max(dem, result); 
		} 
		cout<< result << endl; 
	} 
	return 0; 
}
