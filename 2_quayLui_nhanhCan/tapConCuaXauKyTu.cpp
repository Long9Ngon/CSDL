#include<bits/stdc++.h>
using namespace std;

string s;
int n, k;
int a[20] = {};
vector <string> result;

void Try(int i)
{
	for(int j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if(i == k)
		{
			string res;
			for(int l = 1; l <= k; l++) res += s[a[l] - 1];
			result.push_back(res);			
		}
		else Try(i + 1);
	}
}
 
int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		cin >> s;
		result.clear();
		for(k = 1; k <= n; k++)
			Try(1);
		sort(result.begin(), result.end());
		for(int i = 0; i < result.size(); i++)
			cout << result[i] << " ";
		cout << endl;
	}
	return 0;
}

