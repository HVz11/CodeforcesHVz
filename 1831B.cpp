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
#define pob pop_back()
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n;
    cin >> n;
    vi a(n), b(n);
    for (auto& x : a) {
        cin >> x;
    }
    for (auto& x : b) {
        cin >> x;
    }
    vi mp1(2 * n + 5), mp2(2 * n + 5);
    int i = 0, ans = 0;
    while (i < n) {
        int j = i;
        while (j < n && a[j] == a[i]) {
            ++j;
        }
        mp1[a[i]] = max(mp1[a[i]], j - i);
        ans = max(ans, mp1[a[i]]);
        i = j;
    }
    i = 0;
    while (i < n) {
        int j = i;
        while (j < n && b[j] == b[i]) {
            ++j;
        }
        mp2[b[i]] = max(mp2[b[i]], j - i);
        ans = max(ans, mp2[b[i]] + mp1[b[i]]);
        i = j;
    }
    cout << ans << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
