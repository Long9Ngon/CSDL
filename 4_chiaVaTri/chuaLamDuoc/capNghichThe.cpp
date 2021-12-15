#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define endl '\n'
#define mp make_pair
#define f first
#define s second
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF INT_MAX
#define LINF LLONG_MAX
#define FOR(i, m, n) for(int i=m; i<n; i++)
#define FORD(i, m, n) for(int i=m; i>=n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
using namespace std;
const int MAXN = 1e7 + 5;
const int mod = 1e9 + 7;
template<typename T> void Swap(T &a, T &b){T c = a; a = b; b = c;};
/******* LIBRARY and DEFINE *******/
vector<int> ST; // luu so lan xuat hien cua i 
int A[MAXN];
void build(int root, int left, int right, int val){
	if(left > val || right < val) return;
	else if(left == right && left == val){
		ST[root]++;
		return;
	}
	int mid = (left + right) >> 1;
	build(root << 1, left, mid, val);
	build(1 + (root << 1), mid + 1, right, val);
	ST[root] = ST[root << 1] + ST[1 + (root << 1)];
}
 
int getSum(int root, int left, int right, int val){
	if(left > val) return 0;
	if(right <= val) return ST[root];
	int mid = (left + right) >> 1;
	return getSum(root << 1, left, mid, val) + getSum(1 + (root << 1), mid + 1, right, val);
}
 
void solution(){
	
	int n; cin >> n;
	ST.clear();
	ST.resize(n << 2);
	int limit = 0;
	vector<pii> v;
	FOR(i, 1, n + 1) cin >> A[i], v.eb(A[i], i);
	sort(v.begin(), v.end());
	int index = 1;
	A[v[0].s] = 1;
	FOR(i, 1, v.size()){
		if(v[i].f != v[i - 1].f) index++;
		A[v[i].s] = index;
	}
	limit = index + 1;
	ll ans = 0;
	FORD(i, n, 1){
		ans += getSum(1, 1, limit, A[i] - 1);
		build(1, 1, limit, A[i]);
//		cout << ST[2] << " " << ST[3] << endl;
	} 
	cout << ans << endl;
}
 
/*******************************/
 
/******** MAIN FUNCTION *********/
int main(){	
//	freopen("input.txt", "r", stdin);
//	freopen("checksm.txt", "w", stdout);
	FastIO;
	int test = 1;
	cin >> test; cin.ignore();
	while(test--) solution();	
}
/********** I'mAlone ***********/
/******** CAN NGOC BINH **********/
