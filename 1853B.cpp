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
    int n, k;
    cin >> n >> k;
    int res=0;
    for(int i=1; i<=n; i++){
        bool flag = true;
        int first = n, second = i;
        for(int j=k-1; j>1; j--){
            int curr = first - second;
            if(curr > second || curr<0){
                flag=false;
                break;
            }
            first = second;
            second = curr;
        }
        if(flag){
            res++;
        }
    }
    cout << res << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
