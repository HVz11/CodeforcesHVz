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

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        if (m > n){
            cout << "NO" << endl;
            continue;
        }
        if (m == n){
            cout << "YES" << endl;
            continue;
        }
        int ans = 0;
        int cnt = 0;
        while (n % 3 == 0){
            int x = n / 3;
            cnt++;
            int op = 0;
            while (x < m && op < cnt){
                x *= 2;
                op++;
            }
            if (x == m){
                ans = 1;
                break;
            }
            n = n / 3;
        }
        if (ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
