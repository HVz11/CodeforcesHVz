#include <bits/stdc++.h>
#include <string>
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
#define pb push_back()
#define pob pop_back()
#define all(x) begin(x), end(x)
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    string s;
    cin >> s;
    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int ans=0;
    for(int i=0; i<s.size(); ++i){
        if(s[i] == pi[i]){
            ans++;
        }
        else{
            break;
        }
    }
    cout << ans << endl;

}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

