#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve(){
   
    string s; 
    cin >> s;
    ll n = s.length();
    set<ll> st;
    for(auto x: s) st.insert(x);
    if(st.size() == 1) cout << -1 << endl;
    else cout << n - 1 << endl;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
