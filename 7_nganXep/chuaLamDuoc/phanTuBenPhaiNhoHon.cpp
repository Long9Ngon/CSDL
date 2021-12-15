// <><> NEVER GIVE UP <><> 
// design by CAN NGOC BINH

#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ll long long
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define f first
#define s second
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF INT_MAX
#define LINF LLONG_MAX
//#define testOUT 1
#define all(vec) vec.begin(), vec.end()
#define FILEINPUT freopen("inputCNB.txt", "r", stdin);
#define FILEOUTPUT freopen("ouputCNB.txt", "w", stdout);
#define FOR(i, m, n) for(int i=m; i<n; i++)
#define FORD(i, m, n) for(int i=m; i>=n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
#define debug cerr << "debug: "
/******* LIBRARY and DEFINE *******/

template<typename A, typename B> 
ostream& operator << (ostream &os, const pair<A, B> &p){
return os << "(" << p.f << " " << p.s << ")";};

template<typename T>
ostream& operator << (ostream &os, const vector<T> &vec){
os << "VECTOR: "; for(auto ele: vec) os << ele << " "; return os;};
/********** TEMPLATES *********/

const int MAXN = 1e6 + 5;
const ll mod = (ll)1e9 + 7;
/********** CONSTANT *********/


void solution(){
	int n;
	cin >> n;
	vector<int> A(n), local_min(n), local_max(n);
	FOR(i, 0, n) cin >> A[i];
	
	stack<int> stc;
	local_min[n - 1] = -1;
	stc.push(n - 1);
	FORD(i, n - 2, 0){
		while(!stc.empty() && A[i] <= A[stc.top()]) stc.pop();
		if(stc.empty()) local_min[i] = -1;
		else local_min[i] = stc.top();
		stc.push(i);
	}
	
	stack<int> stc1;
	stc1.push(n - 1);
	local_max[n - 1] = -1;
	FORD(i, n - 2, 0){
		while(!stc1.empty() && A[i] >= A[stc1.top()]) stc1.pop();
		local_max[i] = stc1.empty()? -1 : stc1.top();
		stc1.push(i);
	}
	vector<int> ans;
	FOR(i, 0, n){
		int val = local_max[i];
		if(val == -1){
			cout << -1 << " ";
			continue;
		}
		int index = local_min[val];
		cout << (index == -1? -1 : A[index]) << " ";
	}
	cout << endl;
}


/*******************************/
		
/******** MAIN FUNCTION *********/
int main(){
	#ifdef testIN
		FILEINPUT;
	#endif
	#ifdef testOUT 
		FILEOUTPUT;
	#endif
	
	FastIO;
	
	int test = 1;	
	cin >> test; cin.ignore();	
	while(test--) solution();	
	return 0;	
}
/********** I'mAlone ***********/
