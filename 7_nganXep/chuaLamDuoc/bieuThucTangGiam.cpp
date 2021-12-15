#include<iostream>
#include<string>
#include<sstream>
#define ll long long
using namespace std;
string intToString(int a){
	stringstream ss;
	ss << a;
	return ss.str();
}
int main(){
	int test; cin >> test;
	while(test--){
		int val; 
		string s; cin >> s;
		string ans = "";// ket qua 
		string res = "";
		bool check =false;
		for(int i=0; i<s.length(); i++){
			int count = 1;
			while(s[i] == s[i+1]){// dem so ptu giong nhau va canh nhau 
				i++; count++;
			}
			res.push_back(count + '0');// push count vao res duoi dang char
			res.push_back(s[i]);// push ptu vào sau sô ptu 	
		}
		if(res[1] == 'D'){
			string tml = res.substr(0, 2);
			int len = tml[0] - '0' + 1;
			val = len;
			while(len--) ans += intToString(len + 1);
			res.erase(0, 2);
			check = true;
		}
		if(!check){
			ans.push_back('1');
			val = 1;
		}
		while(res.length() > 1){
			string str = res.substr(0, 2);
			res.erase(0, 2);
			string str1;
			int count = str[0] - '0';
			if(res.length() > 1){
				str1 = res.substr(0, 2);
				res.erase(0,2);
			}
			else{
				while(count--) ans += intToString(++val);
				break;
			}
			while(count > 1){
				ans += intToString(++val);
				count--;
			}
			int spl = count + str1[0] - '0'; 
			int tmp = spl + val;
			val = tmp;
			while(spl--) ans += intToString(tmp--);
		}
		cout << ans << endl;
	}
}
