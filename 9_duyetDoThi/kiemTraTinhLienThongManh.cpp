#include<bits/stdc++.h>
using namespace std;

int v, e;
bool visit[1001];
vector<int> ke[1001];

void nhap()
{
	memset(visit, false, sizeof(visit));
	cin >> v >> e;
	for(int i = 1; i <= v; i++) ke[i].clear();
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
	}
} 

void Bfs(int u)
{
	queue<int> res;
	res.push(u);
	visit[u] = true;
	while(!res.empty())
	{
		int v = res.front(); res.pop();
		for(int i = 0; i < ke[v].size(); i++)
		{
			int s = ke[v][i];
			if(!visit[s])
			{
				res.push(s);
				visit[s] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		nhap();
		int dem = 0;
		for(int i = 1; i <= v; i++)
		{
			if(!visit[i])
			{
				dem++;
				Bfs(i);
			}
			if(dem > 1) break;
		}
		if(dem == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

