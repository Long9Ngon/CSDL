#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string exp;
		cin >> exp;
		int left = 1;
		stack <int> right;
		int n = exp.size();
		
		for(int i = 0; i < n; i++)
		{
			if(exp[i] == '(')
			{
				cout << left << " "; 
				right.push(left);
				left++;
			}
			else if(exp[i] == ')')
			{
				cout << right.top() << " ";
				right.pop();
				
			}
		}
		cout << endl;
	}
	return 0;
}

