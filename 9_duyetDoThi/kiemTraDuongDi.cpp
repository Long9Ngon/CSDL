#include<bits/stdc++.h>
using namespace std;

int n, m, q, x, y;
vector<int> ke[1001];
int truoc[1001];
bool visit[1001];

void nhap()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++) ke[i].clear();
	for(int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	cin >> q;
}

void Bfs(int u)
{
	queue<int> res;
	res.push(u);
	visit[u] = true;
	while(!res.empty())
	{
		u = res.front(); res.pop();
		for(int i = 0; i < ke[u].size(); i++)
		{
			int s = ke[u][i];
			if(!visit[s])
			{
				res.push(s);
				visit[s] = true;
				truoc[s] = u;
			}
		}
	}
	if(truoc[y] == 0) cout << "NO\n";
	else cout << "YES\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		nhap();
		while(q--)
		{
			memset(visit, false, sizeof(visit));
			memset(truoc, 0, sizeof(truoc));
			cin >> x >> y;
			Bfs(x);
		}
	}
	return 0;
}

