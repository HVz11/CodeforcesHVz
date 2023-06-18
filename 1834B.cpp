
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
    string L, R;
    cin>> L >> R;

    int n= L.size(), m = R.size();
    if (m > n)
        cout << R[0] - '0' + 9 * (m -1) << endl;
    else {
        for (int i = 0; i < max(m,n); i++) {
            if (R[i] != L[i]) {
                cout << abs(R[i] - L[i]) + abs(9 * (m -i -1)) << endl;
                return;
            }
        }
        cout << 0 << endl;
    }
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
