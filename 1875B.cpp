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
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    int s=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    if(k%2 == 0){
        k = 2;
    }
    else{
        k = 1;
    }
    for(int i=0; i<k; i++){
        sort(a, a+n);
        sort(b, b+m);
        if(i%2 == 0){
            if(a[0] < b[m-1]){
                swap(a[0], b[m-1]);
            }
        }
        else{
            if(b[0] < a[n-1]){
                swap(b[0], a[n-1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        s += a[i];
    }
    cout << s << endl; 
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
