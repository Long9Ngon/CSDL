#include<bits/stdc++.h>
using namespace std;
string  grayToBinary(string gray)
{
	string binary ="";
	binary += gray[0];
	for(int i=1;i<gray.size();i++)
	{
		if(gray[i]==binary[i-1])	binary+='0';
		else binary +='1';
	}
	return binary;	
}
int main() {
	int T; cin >> T;
	string gray;
	while (T--) {
		cin>>gray;
		cout<<grayToBinary(gray)<<endl;
	}
	return 0;
}

