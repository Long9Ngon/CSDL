#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
void sinhGray1(int n)
{
    if (n <= 0)
        return;
    vector<string> l;
    l.push_back("0");
    l.push_back("1");
    int i, j;
    for (i = 2; i < pow(2,n); i=i*2)
    {
        for (j = i-1 ; j >= 0 ; j--)
            l.push_back(l[j]);
        for (j = 0 ; j < i ; j++)
            l[j] = "0" + l[j];
        for (j = i ; j < 2*i ; j++)
            l[j] = "1" + l[j];
    }   
    for (i = 0 ; i < l.size() ; i++ )
        cout << l[i]<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n; 
    	sinhGray1(n);
    	cout<<endl;
    }
   
    return 0;
}
