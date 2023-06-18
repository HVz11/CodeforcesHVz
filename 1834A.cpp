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
#define pob pop_back()
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n; 
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    int sum =0 , pd=1;
    for (int i = 0; i < n; i++) {
        pd *= a[i];
        sum += a[i];
    }
        
    int ans;
        
    if (sum < 0) {
        sum = -sum;
        int x = (abs(sum) / 2) + sum % 2;
            
        if (x % 2 == 1)
            pd = -pd;
            
            ans = (pd == -1) ? x + 1 : x;
        } else {
            ans = (pd == -1) ? 1 : 0;
        }
        
        cout << ans << endl;
    
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
