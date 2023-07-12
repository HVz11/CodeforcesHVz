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
    int n;
    cin >> n; 

    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2){
        cout << 1 << " " << 2 << endl;
        return;
    }

    int a[n];
        a[n/2] = 1;
        a[n-1] = 2;
        a[0] = 3;
        int cnt = 4;
        for(int i=1; i<n-1; i++){
            if(i==(n/2)){
                continue;
            }
            a[i]=cnt;
            cnt++;
        }
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
