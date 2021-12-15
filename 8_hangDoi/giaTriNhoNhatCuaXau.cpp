#include<bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator()(int a, int b){
		return a <= b;
	}
};

priority_queue <int, vector<int>, cmp> len;
 
int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		int k;
		cin >> k;
		cin >> s;
		int res[300] = {0};
		for(int i = 0; i < s.size(); i++) res[s[i]]++;
	
		for(int i = 0; i < s.size(); i++) 
		{
			if(res[s[i]]> 0)
				len.push(res[s[i]]);
			res[s[i]] = 0;
		}
			
		while(k > 0 && len.top() > 0)
		{
			int n = len.top();
			len.pop();
			n--;
			len.push(n);
			k--;
		}
		
		long long f = 0;
		
		while(len.size())
		{
			int n = len.top();
			len.pop();
			f = f +(long long) n*n;
		}
		cout << f << endl;
	}
	return 0;
}

