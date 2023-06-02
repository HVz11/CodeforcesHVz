#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve(){
    int n, res = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        res = __gcd(res, abs(x-i));
    }
    cout << res << endl;
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
