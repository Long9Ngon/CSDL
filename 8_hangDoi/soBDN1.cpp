#include<bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string n;
		cin >> n;
		int m = n.size() - 1;
		for(int i = 0; i <= m; i ++)
		{
			if(n[i] >= '2') 
			{
				for(int j = i; j <= m; j++)
					n[j] = '1';
				break;
			}	 
		}
		long long result = 0;	
		for(int i = m; i >= 0; i--)
			result = result + (long long)pow(2,m - i)*(n[i] - '0');
		cout << result << endl; 
	}
	return 0;
}

