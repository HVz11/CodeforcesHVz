#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve(){
    ll n; cin >> n;
    for(ll i=0; i<n; i++){
        ll a;
        cin >> a;
        cout << n+1-a <<' ';
    }
    cout <<'\n';
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
