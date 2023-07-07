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
#define pb push_back()
#define pob pop_back()
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
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int z=arr[0];
    int count=0;
    for (int i=0; i<n; i++){
        z &= arr[i];
    }
    if(z != 0){
        cout << 1 << endl;
        return;
    }
    int cur = arr[0];
    int i = 1;
    while(i < n){
        if(cur == z){
            count++;
            cur = arr[i];
        }
        else{
            cur &= arr[i];
        }
        i++;
    }
    if(cur == z) count++;
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
