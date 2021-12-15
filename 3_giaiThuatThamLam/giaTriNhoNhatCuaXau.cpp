#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test --)
	{
		int k;
		cin >> k;
		string s;
		cin >> s;
		priority_queue <int, vector<int>> q;
		int dem[300] = {0};
		
		for(int i = 0; i < s.size(); i++)
			dem[s[i]]++;
			
		for(int i = 0; i < s.size(); i++)
			if(dem[s[i]] > 0)
			{
				q.push(dem[s[i]]);
				dem[s[i]] = 0;
			}
		
		while(k > 0 && q.size() > 0)
		{
			int n = q.top();
			q.pop();
			n--;
			q.push(n);
			k--;
		}
		long tong = 0;
		
		while(q.size() > 0)
		{
			int t = q.top();
			q.pop();
			tong += t*t;
		}
		cout << tong << endl;
	}
}
