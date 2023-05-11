#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int main()
{
    fio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, t;
        cin >> n >> t;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        ll en = 0;
        ll idx = -1;
        for (int i = 0; i < n; i++){
            if (i + a[i] <= t){
                if (b[i] > en){
                    en = b[i];
                    idx = i + 1;
                }
            }
        }
        cout << idx << endl;
    }
}