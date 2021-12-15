#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visit[1001];
int v, e, s, t;
int truoc[1001]; 

void nhap()
{
	memset(visit, false, sizeof(visit));
	memset(truoc,0,sizeof(truoc));
	for(int i = 1; i <= 1001; i++) ke[i].clear();
	cin >> v >> e >> s >> t;
	for(int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
}

void Dfs(int u)
{
	visit[u] = true;
	for(int i = 0; i < ke[u].size(); i++)
	{
		int res = ke[u][i];
		if(!visit[res])
		{
			truoc[res] = u;
			Dfs(res);
		}	
	}
}

void solve()
{
	if(truoc[t] == 0) cout << "-1";
	else
	{
		int u = t;
		int dd[1001];
		int vt = 0;
		while(u != s)
		{
			dd[vt] = u;
			vt++;
			u = truoc[u];
		}
		cout << s << " ";
		for(int i = vt - 1; i >= 0; i--)
			cout << dd[i] << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		nhap();
		Dfs(s);
		cout << endl;
		solve();		
	}
	return 0;
}

