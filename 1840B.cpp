#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v)
{
    for (T &e : v)
        cin >> e;
    return cin;
}

#define ll long long
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvll vector<vector<ll>>
#define vvi vector<vector<int>>
#define pll pair<ll, ll>
#define vs vector<string>
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
    int n, k;
    cin >> n >> k;
    int x = log2(n);
    if (x < k)
        cout << n + 1 << endl;
    else
        cout << (int)pow(2, k) << endl;
}

int main(){
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
