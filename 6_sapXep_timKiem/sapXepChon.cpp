#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0; i<n; i++) cin>>a[i];
	int min;
	for(int i=0; i<n-1; i++)
	{
		min = i;
		for(int j=i+1; j<n; j++)
			if(a[j]<a[min]) min = j;
		swap(a[min],a[i]);
		cout<<"Buoc "<<i+1<<": ";
		for(int k=0; k<n; k++) cout<<a[k]<<" ";
		cout<<endl;
	} 
	return 0;
}

