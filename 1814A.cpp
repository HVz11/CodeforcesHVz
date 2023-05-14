#include <bits/stdc++.h>
#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if(n % 2 == 0){
            cout << "YES\n";
            continue;
        }

        if(k % 2 == 0){
            cout << "NO\n";
            continue;
        }
        if(n >= k){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}