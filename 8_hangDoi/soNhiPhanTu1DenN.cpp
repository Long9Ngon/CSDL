#include<bits/stdc++.h>
using namespace std;

long long np[10001];

long long doinp(int i)
{
	vector <int> a;
	while(i > 0){
		a.push_back(i%2);
		i /= 2;
	}
	long long re = 0;
	for(int j = a.size() - 1; j >= 0; j--)
		re = re*10 + a[j];
	return re;
}

int main() {
	np[0] = 0;
	np[1] = 1;
	for(int i = 2; i < 10001; i++) np[i] = doinp(i);
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++) cout << np[i] << " ";
		cout << endl;
	}
	return 0;
}

