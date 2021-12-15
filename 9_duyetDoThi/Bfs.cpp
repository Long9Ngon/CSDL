#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
bool ok[1001];
void BFS(int u){
	queue<int> q;
	q.push(u);
	ok[u]=false;
	while (q.size()!=0){
		int s=q.front();q.pop(); cout<<s<<" ";
		for (int i=0;i<ke[s].size();i++){
			if (ok[ke[s][i]]){
				q.push(ke[s][i]);
				ok[ke[s][i]]=false;
			}
		}
	}
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		int v,e,u;
		cin>>v>>e>>u;
		for (int i=0;i<1001;i++) ke[i].clear();
		memset(ok,true,sizeof(ok));
		while (e--){
			int a,b;cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		BFS(u);
	} 
}
