#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int main() {
	int n;
	cin >> n;
	long a[n];
	vector <long> l;
	vector <long> c;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(i % 2 == 0) c.push_back(a[i]);
		else l.push_back(a[i]);
	 } 
	 
	sort(l.begin(), l.end());
	sort(c.begin(), c.end(), cmp);
	
	int j = 0, k = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			cout << c[j] << " ";
			j++;
		}
		else 
		{
			cout << l[k] << " ";
			k++;
		}
	}
	return 0;
}

