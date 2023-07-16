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
    int arr[n];
    int sum_0 =0;
    bool flag = false;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            sum_0++;
        }
        else if(arr[i] >= 2){
            flag = true;
        }
    }
    if(sum_0 <= (n+1)/2){
        cout << 0 << endl;
    }
    else if(flag || sum_0==n){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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
