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
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n,k,x; 
    cin >> n >> k >> x;
    vi a;
    if(x != 1){
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=1; i<=n; ++i){
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }

    if(n == 1 || k <= 1){
        cout << "NO" << endl;
        return;
    }

    if(n%2 == 0){
        cout << "YES" << endl;
        cout << n/2 << endl;
        for(int i=1; i<=n/2; ++i){
            cout << 2 << " ";
        }
        cout << endl;
        return;
    }

    if(k > 2){
        cout << "YES" << endl;
        cout << (n-3)/2 + 1 << endl;
        for(int i=1; i<=(n-3)/2; ++i){
            cout << 2 << " ";
        }
        cout << 3;
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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
