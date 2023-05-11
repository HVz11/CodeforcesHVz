#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i<n ; i++){
            cin >> a[i];
        }

        sort(a, a+n);
        cout << max(a[0]*a[1], a[n-1]*a[n-2]) << "\n";
        }
}