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
    int q;
    cin >> q;
    vi a;
    int cnt = 0;

    for (int j = 0; j < q; j++) {
        int x;
        cin >> x;
        int nw_cnt = cnt + (!a.empty() && a.back() > x);

        if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0])) {
            a.push_back(x);
            cnt = nw_cnt;
            cout << "1";
        } 
        else {
            cout << "0";
        }
    }
    cout << endl;

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
