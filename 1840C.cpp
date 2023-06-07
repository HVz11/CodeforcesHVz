#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v)
{
    for (T &e : v)
        cin >> e;
    return cin;
}

#define ll long long
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvll vector<vector<ll>>
#define vvi vector<vector<int>>
#define pll pair<ll, ll>
#define vs vector<string>
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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> arr;
    int count = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (temp <= q){
            count++;
            if (i == n - 1)
                arr.push_back(count);
        }
        else{
            arr.push_back(count);
            count = 0;
        }
    }

    ll ans = 0;
    for (int i = 0; i < arr.size(); i++){
        int cons = arr[i];
        for (int j = 1; j <= cons; j++){
            int plus = j + k - 1;
            if (plus <= cons){
                long long ways = cons - plus + 1;
                ans += ways;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
