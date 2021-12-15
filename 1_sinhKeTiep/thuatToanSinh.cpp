#include <bits/stdc++.h>
#define MAX 10
using namespace std;
int X[MAX], n, OK, kt; 
void Init(void) 
{
	cin>>n; OK = true;
	for(int i=0; i<n; i++) 
		X[i] =0;
}
void Next_Bits_String(void) 
{
	int i = n-1;
	while(i>=0 && X[i]) 
	{ 
		X[i]=0; i--; 
	}
	if(i>=0) X[i] =1;
	else OK = false; 
}
void check(void)
{
	kt=1;
	for(int i=0; i<n; i++)
	{
		if(X[i]!=X[n-i-1]) 
		{
			kt=0;
			break;
		}	
	}
	if(kt==1)
	{
		for(int i=0;i<n;i++) cout<<X[i]<<" ";
		cout<<endl;
	}
	
 } 
void Binary_String(void) 
{
	Init();
	while(OK) 
	{ 
		check(); 
		Next_Bits_String();
	}
}
int main(void) 
{
	Binary_String();
}
