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
    int n;
    cin >> n;
    vi a;
    for(int i=1; i<1e2; i++){
        if(n%i == 0){
            a.push_back(i);
        }
    }
    int len = a.size();
    int maxLen = 1, currLen= 1;
    int l = 0, r = 0;

    for (int i = 1; i < len; i++){
        if(a[i] == a[i - 1] + 1){
            currLen++;
        } 
        else{
            currLen = 1;
        }
        if(currLen > maxLen){
            maxLen = currLen;
            l = i - currLen + 1;
            r = i;   
        }
    }
    cout << r - l + 1 << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
