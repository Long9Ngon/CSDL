#include<bits/stdc++.h>
using namespace std;

string a,b;

void max()
{
	int amax = 0;
	int bmax = 0;
	int max = 0;
	for(int i = 0; i < a.size(); i++ )
	{
		if(a[i] == '5')
			amax = amax*10 + ( a[i] - '0') + 1;
		 
		else
			amax = amax*10 + ( a[i] - '0');
	}
	for(int i = 0; i < a.size(); i++ )
	{
		if(b[i] == '5')
			bmax = bmax*10 + ( b[i] - '0') + 1;
		else
			bmax = bmax*10 + (b[i] - '0');
	}
	max = amax + bmax;
	cout << max;
}

void min()
{
	int amin = 0;
	int bmin = 0;
	int min = 0;
	for(int i = 0; i < a.size(); i++ )
	{
		if(a[i] == '6')
			amin = amin*10 + (a[i] - '0') - 1;
		else
			amin = amin*10 + (a[i] - '0');
	}
	for(int i = 0; i < a.size(); i++ )
	{
		if(b[i] == '6')
			bmin = bmin*10 + (b[i] - '0') - 1;
		else 
			bmin = bmin*10 + (b[i] - '0');
	}
	min = amin + bmin;	
	cout << min << " ";
}

int main() {
	cin >> a >> b;
	min();
	max();
	cout << endl;
	return 0;
}

