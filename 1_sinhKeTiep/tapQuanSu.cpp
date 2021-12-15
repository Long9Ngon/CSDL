#include <bits/stdc++.h> 
using namespace std;
int X[41],Y[41], n, k;
void Init(void) {
	cin>>n>>k;
	for(int i=1;i<=k; i++) 
	{
		cin>>X[i];
		Y[i]=X[i];
	}
}
void Next_Combination(void){
	int i=k,dem=0; 
	while(i>0 && X[i]==n-k+i) { 
		i--; 
	}
	if(i>0) { 
		X[i]=X[i] + 1; 
		for(int j=i+1; j<=k; j++) 
			X[j] = X[i] + j - i;
		for(int z=1;z<=k;z++)
			for(int r=1;r<=k;r++) 		
				if(X[z]==Y[r]) 
				{
					dem++;
					break;
				} 
		cout<<k-dem<<endl;	
	}
	else { 
		cout<<k<<endl;
	}		
}
int main(void) {
	int T; cin>>T;
	while(T--) 
	{ 
		Init(); 
		Next_Combination();
	}
}
