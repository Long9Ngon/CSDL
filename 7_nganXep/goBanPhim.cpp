// cach 1: dung string 
//#include<bits/stdc++.h>
//using namespace std;
//
//void solve()
//{
//	string s;
//	getline(cin,s);
//	string res, rem;
//	
//	for(int i = 0; i < s.size(); i++)
//	{
//		if(s[i] == '<')
//		{
//			if(res.size() > 0)
//			{
//				rem.push_back(res.back());
//				res.pop_back();
//			}
//		}
//		
//		else if(s[i] == '>')
//		{
//			if(rem.size() > 0)
//			{
//				res.push_back(rem.back());
//				rem.pop_back();
//			}
//		}
//		
//		else if(s[i] == '-')
//		{
//			if(res.size() > 0)
//				res.pop_back();
//		}
//		
//		else res.push_back(s[i]);
//	} 
//	reverse(rem.begin(), rem.end());
//	cout << res << rem << endl;
//}
//
//int main() {
//	solve();
//	return 0;
//}


// cach 2: dung stack 
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	stack <char> res, rem;
	
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '<')
		{
			if(!res.empty())
			{
				rem.push(res.top());
				res.pop();
			}
			continue;
		}
		
		if(s[i] == '>')
		{
			if(!rem.empty())
			{
				res.push(rem.top());
				rem.pop();
			}
			continue;
		}
		
		if(s[i] == '-')
		{
			if(!res.empty())
				res.pop();
			continue;
		}
		res.push(s[i]);
	} 
	
	string c;
	while(!res.empty())
	{
		c += res.top();
		res.pop();
	}
		
	for(int i = c.size() - 1; i >= 0; i--) cout << c[i];
	
	while(!rem.empty())
	{
		cout << rem.top();
		rem.pop();
	}
	cout << endl;
	return 0;
}
