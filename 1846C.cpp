#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v){
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
    cout.tie(NULL)

void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vvi scr;
    for(int i=1; i<=n; i++){
        vi v;
        for(int j=0; j<m; j++){
            int c;
            cin>>c;
            v.pb(c);
        }
        sort(all(v));
 
        int sum = 0, penalty = 0, pp = 0;
        for(int j=0; j<m; j++){
            penalty += v[j];
            if(penalty > h){
                break;
            }
            pp += penalty;
            sum++;
        }
        scr.pb({-sum, pp, i});
    }
    sort(all(scr));
    for(int i=0; i<n; i++){
        if(scr[i][2] == 1){
            cout << i+1 << endl;
            return;
        }
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
