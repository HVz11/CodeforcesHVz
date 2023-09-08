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

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solve(){
    int l, r;
    cin >> l >> r;
    if(r <= 3){
        cout << "-1" << endl;
    }
    else{
        if(r-l+1 >= 2){
            while(r%2){
                r--;
            }
            cout << 2 << " " << r - 2 << endl;
        }
        else{
            for(int i=2; i*i<=l; i++){
                if(l%i == 0){
                    cout << i << " " << l - i << endl;
                    return;
                }
            }
            cout << "-1" << endl;
        }
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
