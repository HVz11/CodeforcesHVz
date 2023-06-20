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
#define pb push_back()
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
    int max_sum = 0;
    int op = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val <= 0) {
            if (val < 0) {
                a = 1;
            }
        }
        else {
            if (a == 1)
                op++;
            a = 0;
        }

        if (val < 0)
            val = -val;

        max_sum += val;
    }

    if (a == 1)
        op++;

    cout << max_sum << " " << op << endl;
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
