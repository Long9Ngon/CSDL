#include<bits/stdc++.h>
using namespace std;

vector <int> ke[1001];
bool visit[1001];
int v, e, u;

void nhap()
{
	memset(visit, false, sizeof(visit));
	for(int i = 1; i <= 1001; i++) ke[i].clear();
	cin >> v >> e >> u;
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
	}
}

void Dfs(int u)
{
	cout << u << " ";
	visit[u] = true;
	for(int i = 0; i < ke[u].size(); i++)
	{
		int res = ke[u][i];
		if(!visit[res]) Dfs(res);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		nhap();
		Dfs(u);
		cout << endl;
	}
	return 0;
}

