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
    vector<vector<int>> arr(k+1,vector<int> ());
    for (int j=0;j<n;j++) {
        int x;
        cin >> x;
        arr[x].push_back(j);
    }
    int ans = n;
    for(int j=1;j<=k;j++) {
        int max1 = 0,max2=0;
        int last =0;
        for(int l=0; l<arr[j].size(); l++){
            int cur = arr[j][l] - last;
            if(cur > max1){
                max2 = max1;
                max1 = cur;
            } 
            else if(cur > max2){
                max2 = cur;
            }
            last = arr[j][l] + 1;
        }
        int cur = n - last;
        if(cur > max1){
            max2 = max1;
            max1 = cur;
        } 
        else if(cur > max2){
            max2 = cur;
        }
        ans = min(ans,max((max1)/2,max2));
    }
    cout << ans << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
