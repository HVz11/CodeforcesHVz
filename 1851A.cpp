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
    cout.tie(NULL);

void solve(){
    int n, m, k, H; 
    cin >> n >> m >> k >> H;
    vi h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        bool f1 = ((abs(h[i] - H)%k) == 0);
        bool f2 = ((abs(h[i] - H)<=((m-1))*k));
        bool f3 = (abs(h[i] - H));
        if( f1 && f2 && f3){
            count++;
        }
    }
    cout << count << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
