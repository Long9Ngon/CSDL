#include<bits/stdc++.h>
using namespace std;

bool hang[11], cot[11], xuoi[22], nguoc[22]; 
int de[11][11], a[11];
int n;
int result;

void init()
{
	n = 8;
	for( int i = 1; i <= n; i++)
		for( int j = 1; j <= n; j++)
			cin >> de[i][j];
	for(int i = 0; i <= 11; i++) cot[i] = hang[i] = false;
	for(int i = 0; i <= 22; i++) xuoi[i] = nguoc[i] = false;
	result = 0;
}

void Try(int i)
{
	for( int j = 1; j <= n; j++)
	{
		if( !cot[j] && !hang[j] && !xuoi[i + j -1] && !nguoc[i -j + n])
		{
			a[i] = j;
			cot[j] = hang[j] = xuoi[i+j-1] = nguoc[i-j+n] = true;
			if(i == n) 
			{   
				int sum = 0;
				for(int l = 1; l <= n; l++)
					sum += de[l][a[l]];
				result = max( result, sum);
			}
			else Try(i+1);
			cot[j] = hang[j] = xuoi[i+j-1] = nguoc[i-j+n] = false;
		}
	}
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		Try(1);
		cout << result <<endl;
	}
}
