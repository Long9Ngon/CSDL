#include<bits/stdc++.h>
using namespace std;

const int n = 6;
map< string, bool> visit;

string left(string s)
{
	string l;
	l = l + s[3] + s[0] + s[2] + s[4] + s[1] + s[5];
	return l;
}

string right(string s)
{
	string r;
	r = r + s[0] + s[4] + s[1] + s[3] + s[5] + s[2];
	return r;
}

int bfs(string begin, string end)
{
	queue< pair< string, int>> res;
	visit [begin] = true;
	res.push({begin,0});
	while(!res.empty())
	{
		auto q = res.front();
		res.pop();
		string a = q.first;
		int b = q.second;
		if(a == end)
		{
			return b;
		}
		string l = left(a);
		string r = right(a);
		if(visit[l] == false)
		{
			visit[l] = true;
			res.push({l,b+1});
		}
		if(visit[r] == false)
		{
			visit[r] = true;
			res.push({r,b+1});
		}
		
	}
	
	return -1;
}

int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		visit.clear();
		string begin, end;
		for(int i = 0; i < n; i++)
		{
			char c;
			cin >> c;
			begin += c;
		}
		for(int i = 0; i < n; i++)
		{
			char c;
			cin >> c;
			end += c;
		}
		cout << bfs(begin,end) << endl;
	}
	return 0;
}

