#include<bits/stdc++.h>
using namespace std;

int a[17];
int n;

void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		a[i] = j;
		if(i == n-1)
		{
			int kt = 1;
			if(a[0] == 1 && a[n-1] == 0)
			{
				for(int k = 0; k < n - 1; k++)
				{
					if(a[k] == 1 && a[k+1] == 1)
					{
						kt = 0;
						break;
					}
				}
				if(kt == 1)
				{
					for(int k = 0; k < n; k++)
					{
						if(a[k] == 1) cout << "H";
						else cout <<"A";
					}
					cout << endl;
				}
			}
		}
		else Try(i+1);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		Try(0);
	}
	return 0;
}

