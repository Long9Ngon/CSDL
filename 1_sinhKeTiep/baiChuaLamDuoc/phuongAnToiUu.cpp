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
#define pll pair<long long, long long>
#define s second
#define eb emplace_back
#define pii pair<int, int>
#define INF INT_MAX
#define LINF LLONG_MAX
#define all(vec) vec.begin(), vec.end()
#define FILEINPUT freopen("inputCNB.txt", "r", stdin);
#define FILEOUTPUT freopen("ouputCNB.txt", "w", stdout);
#define FOR(i, m, n) for(int i=(int)m; i<(int)n; i++)
#define FORD(i, m, n) for(int i=(int)m; i>=(int)n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
#define sqr(a) (1.0)*(a)*(a)
/******* LIBRARY and DEFINE *******/


template<typename A, typename B> 
ostream& operator << (ostream &os, const pair<A, B> &p){
return os << "(" << p.f << " " << p.s << ")";};

template<typename T>
ostream& operator << (ostream &os, const vector<T> &vec){
os << "VECTOR: "; for(auto ele: vec) os << ele << " "; return os;};
/********** TEMPLATES *********/

const int MAXN = 1e4 + 5;
const int mod = 1e9 + 7;

/***** CONSTANT ******/

ll n, weight;
vector<ll> v, w;
vector<pair<long long, long long>> adj;
string anss;
ll ans = 0;

void backTrack(ll index, ll current_w, ll current_v, string path){
	
	if(current_w > weight) return;
	if(index == n){
		if(current_v > ans){
			ans = current_v;
			anss = path;
		}
		return;
	}
	
	backTrack(index + 1, current_w, current_v, path + "0");
	backTrack(index + 1, current_w + adj[index].s, current_v + adj[index].f, path + "1");
}

void solution(){
	ans = 0;
	cin >> n >> weight;
	
	anss.clear();
	v.resize(n + 5);
	w.resize(n + 5);
	adj.clear();
	
	FOR(i, 1, n + 1) cin >> v[i];
	FOR(i, 1, n + 1) cin >> w[i];
	
	FOR(i, 1, n + 1) adj.eb(v[i], w[i]);
	
//	sort(all(adj), [&](pii p1, pii p2){
//		return p1.f * 1.0 / p1.s > p2.f * 1.0 / p2.s;
//	});
	
	backTrack(0, 0, 0, "");
	cout << ans << endl;
	FOR(i, 0, anss.length() - 1) cout << anss[i] << " ";
	cout << anss[anss.length() - 1];
	
//	cout << endl;
}

/*******************************/
		
/******** MAIN FUNCTION *********/
int main(){
	
	#ifdef NGOCBINH
		FILEINPUT;
		FILEOUTPUT;
	#endif
	
//	freopen("data.in", "r", stdin);
	
	FastIO;
	
	int test = 1;	
//	cin >> test; cin.ignore();	

	while(test--) solution();
	
	return 0;	
}
/********** I'mAlone ***********/
