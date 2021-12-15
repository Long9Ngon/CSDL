#include<bits/stdc++.h>
using namespace std;

int v, e, dem;
vector<int> ke[1001];
bool visit[1001];

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
		ke[b].push_back(a);
	}
}

void Bfs(int u)
{
	queue<int> res;
	res.push(u);
	visit[u] = true;
	while(!res.empty())
	{
		u = res.front(); res.pop();
		dem ++;
		for(int i = 0; i < ke[u].size(); i++)
		{
			int s = ke[u][i];
			if(!visit[s])
			{
				res.push(s);
				visit[s] = true;
			}
		}
	}
}

void solve()
{
	nhap();
	for(int i = 1; i <= v; i++)
	{
		dem = 0;
		visit[i] = true;
		if(i == 1) Bfs(2);
		else Bfs(1);
		if(dem < v - 1) cout << i << " ";
		memset(visit, false, sizeof(visit));
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}

