#include<bits/stdc++.h>
using namespace std;

int c[501][501]; 
bool visit[501][501];

int main() {
	int T; cin >> T;
	while (T--) {
		int m,n;
		cin >> n >> m;
		int count = 0;
		queue <pair<int,int>> res;
		memset(visit,false,sizeof(visit));
		memset(c,0,sizeof(c));
		
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
			{
				cin >> c[i][j];
				if(c[i][j] == 1) res.push({i,j});
			}
		
		while(!res.empty())
		{
			auto a = res.front(); res.pop();
			if(visit[a.first][a.second]) continue;
			count++;
			queue <pair<int,int>> q;
			q.push(a);
			
			while(!q.empty())
			{
				auto b = q.front(); q.pop();
				visit[b.first][b.second] = true;
				
				for(int i = b.first - 1; i <= b.first + 1; i++)
					for(int j = b.second - 1; j <= b.second + 1; j++)
					{
						if(visit[i][j]) continue;
						if(c[i][j] != 1) continue;
						q.push({i,j});
						visit[i][j] = true;
					}
			}
		}
		
		cout << count << endl;
	}
	return 0;
}

