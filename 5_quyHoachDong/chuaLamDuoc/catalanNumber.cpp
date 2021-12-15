#include<iostream>
#include<string>
#include<sstream>
#define pb push_back
#include<algorithm>
#include<cmath>
using namespace std;
string C[5005] = {};
string toString(int n){
	stringstream ss;
	ss << n;
	return ss.str();
}
string addtration(string s1, string s2){
	int SIZE1= s1.length(), SIZE2 = s2.length();
	(SIZE1 > SIZE2)? s2.insert(0, SIZE1-SIZE2, '0') : s1.insert(0, SIZE2-SIZE1, '0');
	string result;
	int tmp = 0;
	for(int i=s1.length()-1; i>=0; i--){
		int val = (s1[i] - '0' + s2[i] - '0' + tmp);
		tmp = val / 10;
		result.insert(0, 1, val % 10 + '0');
	}
	if(tmp > 0) result.insert(0, 1, tmp + '0');
	return result;
}
string add(string ans, string res, int k){
	if(ans.empty()) return res;
	else{
		res.insert(res.length(), k, '0');
		ans.insert(0, res.length()-ans.length(), '0');
		int mis = 0;
		string tml;
		for(int i=ans.length()-1; i>=0; i--){
			int val = ans.at(i) - '0' + res.at(i) - '0' + mis;
			mis = val / 10;
			tml.insert(0, 1, val % 10 + '0');
		}
		if(mis != 0) tml.insert(0, 1, mis + '0');
		return tml;
	}
}
string multiplication(string s1, string s2){
	string ans;
	int k = 0;
	for(int i=s2.length()-1; i>=0; i--){
		int mis = 0;
		char c = s2.at(i);
		string res;
		for(int j=s1.length()-1; j>=0; j--){
			int tmp = (c - '0') * (s1.at(j) - '0') + mis;
			mis = tmp / 10;
			res.insert(0, 1, tmp % 10 + '0');
		}
		if(mis != 0) res.insert(0, 1, mis + '0');
		ans = add(ans, res, k);
		k++;
	}
	return ans;
}
//612 / 3
string division(string s1, int n){
	string result;
	int res = 0;
	for(int i=0; i<s1.length(); i++){
		int tmp = res*10 + s1[i] - '0';
		result.push_back(tmp / n + '0');
		res = tmp % n;
	}
	while(result[0] == '0') result.erase(0, 1);
	return result;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int n; cin >> n;
		C[0] = "1"; C[1] = "1";
		for(int i=2; i<=n; i++){
			int mvp = 2*(2*i-1);
			string num = multiplication(toString(mvp), C[i-1]);
			C[i] = division(num, i+1);
		}
		cout << C[n] << endl;
//		string ans;
//		for(int i=0; i<=n; i++){
//			string number = multiplication(C[i], C[n-i]);
//			ans = addtration(number, ans);
//		}
//		cout << ans << endl;
	}
}
