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
    int n, q; 
    cin >> n >> q;
    int a[n];
    int sum=0;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    
    int prf[n+1]={};
    for(int i=1;i<=n;i++)
        prf[i]=prf[i-1]+a[i-1];
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;

        if((sum - prf[r] + prf[l-1] + k*(r-l+1))%2)
            cout<< "YES" << endl;
        else
            cout <<"NO" << endl;
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
