#include <bits/stdc++.h>
using namespace std;

int X[100], n, OK, a[100], k, dem; 

void Init(void) 
{
	dem = 0; 
	cin >> n >> k; OK = true;
	for(int i = 0; i < n; i++) 
	{
		X[i] = 0;
		cin >> a[i];
	}
	sort(a, a + n);
}

void Next_Bits_String(void) 
{
	int i = n - 1;
	while(i >= 0 && X[i]) 
	{ 
		X[i] = 0; i--; 
	}
	if( i >= 0) 
	{
		X[i] = 1;		
	}
	else OK = false; 
}

void check()
{
	int sum = 0;
		for(int i = 0; i < n; i++)
		{
			if ( X[i]) 
				sum += a[i];
		}
		if (sum == k)
		{
			dem ++; 
			for(int i = 0; i < n; i++)
			{
				if ( X[i]) 
					cout << a[i] <<" ";
			}
			cout << endl;
		}
}

int main(void) 
{
		Init();
		check();
		while(OK)
		{
			Next_Bits_String();
			check();
		}
		cout << dem << endl; 
}
