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
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n;
    cin >> n;
    int x;
    int m=0, b=0;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x%2 == 0){
            m += x;
        }
        else{
            b += x;
        }
    }
    if(m > b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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

