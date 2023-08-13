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

void solve(){
    int n;
    cin >> n;
    vi a(n), b, c;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i=0; i<n; i++){
        if(a[0] == a[n-1]){
            cout << -1 << endl;
            return;
        }
    }
    int maxElement = a.back();
    for(int i=0; i<n; i++){
        if(a[i] == maxElement ){
            c.pb(a[i]);
        }
        else{
        b.pb(a[i]);
        }
    }

    cout << b.size() << " " << c.size() << endl;
    for (int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i=0; i<c.size(); i++){
        cout << c[i] << " ";
    }
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
