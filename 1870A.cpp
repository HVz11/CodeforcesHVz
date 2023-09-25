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
    int n, k, x;
    cin >> n >> k >> x;
     if (k-1> x || k > n) {
        cout << -1 << endl;
    } 
    else {
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += i;
        }
        if(k == x){
            sum += (n - k) * (x-1);
        }
        else{
            sum += (n - k) * x;
        }
        cout << sum << endl;
    }
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
