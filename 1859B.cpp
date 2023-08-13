#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v)
{
    for (T &e : v)
        cin >> e;
    return cin;
}

#define int long long
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vs vector<string>
#define endl '\n'
#define pb push_back
#define pob pop_back
#define all(x) x.begin(), x.end()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vvi a(n);
    vi a1, a2;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        for (int i = 0; i < s; i++)
        {
            int x;
            cin >> x;
            a[i].pb(x);
        }
        sort(a[i].begin(), a[i].end());
        a1.pb(a[i][1]);
        a2.pb(a[i][0]);
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int ans = a2[0];
    for (int i = 0; i < n - 1; i++)
    {
        ans += a1[i];
    }
    cout << ans << endl;
}

int32_t main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
