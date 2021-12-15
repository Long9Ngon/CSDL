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
#define FOR(i, m, n) for(int i=(int)m; i<(int)n; i++)
#define FORD(i, m, n) for(int i=(int)m; i>=(int)n; i--)
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

const int MAXN = 1e4 + 5;
const ll mod = (ll)1e9 + 7;
/********** CONSTANT *********/

vector<vector<int>> adj;
vector<int> cnt;
vector<int> ele;

void dfs(int u){
	if(adj[u].size() == 0){
		ele.pb(u);
		return;
	}
	for(auto x: adj[u]){
		cnt[x] = cnt[u] + 1;
		dfs(x);
	}
	
}


void solution(){
	ele.clear();
	adj.clear();
	adj.resize(MAXN);
	cnt.clear();
	cnt.resize(MAXN);
	int n;
	cin >> n;
	int root = -1;
	FOR(i, 0, n){
		int x, y;
		char c;
		cin >> x >> y >> c;
		if(root == -1) root = x;
		adj[x].pb(y);
	}
	
	dfs(root);
	int count = cnt[ele[0]];
	bool ans = true;
	for(auto x: ele){
		if(cnt[x] != count) ans = false;
	}
	cout << (ans? "1" : "0") << endl;
}


/*******************************/
		
/******** MAIN FUNCTION *********/
int main(){
	
	#ifdef NGOCBINH
		FILEINPUT;
		FILEOUTPUT;
	#endif
	
	FastIO;
	
	int test = 1;	
	cin >> test; cin.ignore();	
	while(test--) solution();	
	return 0;	
}
/********** I'mAlone ***********/
