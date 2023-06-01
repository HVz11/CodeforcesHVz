#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve(){
   ll a, b;
   cin >> a >> b;
   cout << min(min(a,b), (a + b)/4) << endl;
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
