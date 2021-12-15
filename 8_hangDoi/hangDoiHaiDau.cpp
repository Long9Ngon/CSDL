#include<bits/stdc++.h>
using namespace std;
int main() {
	int q,n;
	cin >> q;
	deque <int> luu;
	string s;
	while(q--)
	{
		cin >> s;
		if(s == "PUSHBACK")
		{
			cin >> n;
			luu.push_back(n);
		}
		
		else if(s == "PUSHFRONT")
		{
			cin >> n;
			luu.push_front(n);
		}
		
		else if(s == "POPBACK" && luu.size() > 0) luu.pop_back();
		else if(s == "POPFRONT" && luu.size() > 0) luu.pop_front();
		
		else if(s == "PRINTBACK")
		{
			if(luu.size() > 0) cout << luu.back() << endl;
			else cout << "NONE\n";
		}
		
		else if(s == "PRINTFRONT")
		{
			if(luu.size() > 0) cout << luu.front() << endl;
			else cout << "NONE\n";
		}
		
	 } 
	return 0;
}

