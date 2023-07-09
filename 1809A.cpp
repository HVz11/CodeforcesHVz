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
    string s;
    cin >> s;
    vector<int> cnt(10);
    for (auto c : s){
        ++cnt[c - '0'];
    }
    int mx = *max_element(cnt.begin(), cnt.end());
    if (mx == 4){
        cout << -1 << endl;
    }
    else if(mx == 3){
        cout << 6 << endl;
    }
    else{
        cout << 4 << endl;
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
