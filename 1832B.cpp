#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= n - k; i--)
    {
        sum -= a[i];
    }
    ll ans = sum;
    int r = n - k;
    int l = -1;
    for (int i = 1; i <= k; i++)
    {
        sum += a[r];
        sum -= a[l + 1];
        sum -= a[l + 2];
        r++;
        l += 2;
        ans = max(ans, sum);
    }
    cout << ans << endl;
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
    return 0;
}
