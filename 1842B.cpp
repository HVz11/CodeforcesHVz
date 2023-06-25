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
#define vll vector<long long>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vs vector<string>
#define endl '\n'
#define pb push_back()
#define pob pop_back()
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define mod 998244353
#define rep(i,n) for(long long i=0;i<n;i++)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n, x;
    cin >> n >> x;

    vll st1(n), st2(n), st3(n);
    for (int i = 0; i < n; i++) {
        cin >> st1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> st2[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> st3[i];
    }
    int know = 0;
    rep(i, n){
        if((x | st1[i])!=x) break;
        know = know | st1[i];
    }
    rep(i, n){
        if((x | st2[i])!=x) break;
        know = know | st2[i];
    }
    rep(i, n){
        if((x | st3[i])!=x) break;
        know = know | st3[i];
    }
    if (know == x) {
            cout << "YES" << endl;
        }
    else{
            cout<< "NO" << endl;
        }
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
