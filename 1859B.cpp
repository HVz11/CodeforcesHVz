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
    vvi a(n);
    vi small, second_small;
 
    for(int i=0; i<n; i++){
        int m; 
        cin >> m;
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            a[i].pb(x);
        } 
        sort(all(a[i]));
        small.pb(a[i][0]);
        second_small.pb(a[i][1]);
    }
    sort(all(small));
    sort(all(second_small));
 
    int ans = 0;
    ans += min(second_small[0], small[0]);

    for(int i=1; i<n; i++){
        ans += second_small[i];
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
