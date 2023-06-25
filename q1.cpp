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
    int n,m; 
    cin >> n >> m;
    int a[n], b[m];
    int sum_a=0, sum_b=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >>b[i];
    }
    for (int i = 0; i<n; i++) {
        sum_a += a[i];
    }
    for (int i = 0; i<m; i++) {
        sum_b += b[i];
    }
    if(sum_a > sum_b){
        cout<< "Tsondu" << endl;
    }
    else if(sum_a < sum_b){
        cout << "Tenzing" << endl;
    }
    else{
        cout << "Draw" << endl;
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
