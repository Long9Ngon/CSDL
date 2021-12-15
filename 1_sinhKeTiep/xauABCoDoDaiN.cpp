#include <bits/stdc++.h>
#define MAX 10
using namespace std;
int X[MAX], n, OK; 
void Init(void) 
{
	cin>>n; OK = true;
	for(int i=0; i<n; i++) 
		X[i] =0;
}
void Result(void) 
{
	for(int i=0; i<n; i++) 
	{
		if(X[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
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
void Binary_String(void) 
{
	Init();
	while(OK) 
	{ 
		Result(); 
		Next_Bits_String();
	}
	cout<<endl;
}
int main(void) 
{
	int T; cin>>T;
	while(T--)
		Binary_String();
}
