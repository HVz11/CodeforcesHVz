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
    int n, k; 
    cin >> n >> k;
    string s; cin >> s;
    if(k%2 == 0){
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }
    string l, r;
    for(int i=0; i<n; i++){
        if(i%2 == 0) l += s[i];
        else r += s[i];
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());

    for(int i=0; i<l.size(); i++){
        cout << l[i];
        if(i < r.size()){
            cout << r[i];
        }
    }
    cout << endl;
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
