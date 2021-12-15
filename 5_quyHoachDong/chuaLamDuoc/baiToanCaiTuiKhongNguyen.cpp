#include <bits/stdc++.h>
#define author "CODE BY KQamazing"
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie();                    \
    cout.tie()
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pld pair<ld, ld>
#define matrix vector<vector<ll>>
#define Modd (ll)(1e9 + 7)

using namespace std;

bool Multitests = 1;
ll test = 1, n, m, k, l, r, x, y;

bool comp(const pll &a, const pll &b)
{
    return 1.0 * a.first / a.second > 1.0 * b.first / b.second;
}

void Solve()
{
    cin >> n >> m;
    vector<pll> A;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        A.push_back({x, y});
    }
    sort(A.begin(), A.end(), comp);
    // for (auto p : A)
    //     cout << p.first << "  " << p.second << endl;
    ll ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + A[i].second >= m)
        {
            cout << (ld)ans + (ld)(m - sum) * A[i].first / A[i].second << endl;
            return;
        }
        else
        {
            ans += A[i].first;
            sum += A[i].second;
        }
    }
    cout << (ld)ans << endl;
}

int main()
{
    faster;
    cout << fixed << setprecision(2);
    if (Multitests)
        (cin >> test).ignore();
    while (test--)
        Solve();
    return 0;
}
