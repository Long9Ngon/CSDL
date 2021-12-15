// MLE -.-

#include<bits/stdc++.h>
using namespace std;

const int n = 10;
map<string,bool> visit;

string left(string s)
{
	string s1;
	s1 = s1 + s[3] + s[0] + s[2] + s[7] + s[4] + s[1] + s[6] + s[8] + s[5] + s[9];
	return s1;
}

string right(string s)
{
	string s1;
	s1 = s1 + s[0] + s[4] + s[1] + s[3] + s[8] + s[5] + s[2] + s[7] + s[9] + s[6];
	return s1;	
}

int bfs(string s)
{
	queue <pair<string,int>> res;
	visit[s] = true;
	res.push({s,0});
	while(res.size() > 0)
	{
		auto q = res.front();
		res.pop();
		string a = q.first;
		int b = q.second;
		if(a == "1238004765")
		{
			return b;
		}
		string l = left(a);
		string r = right(a);
		if(!visit[l])
		{
			visit[l] = true;
			res.push({l,b+1});
		}
		if(!visit[r])
		{
			visit[r] = true;
			res.push({r,b+1});
		}
	}
	return -1;
}

int main() {
	int T; cin >> T;
	while (T--) {
		visit.clear();
		string begin;
		for(int i = 0; i < n; i++)
		{
			char c;
			cin >> c;
			begin += c;
		}
		cout << bfs(begin);
	}
	return 0;
}

