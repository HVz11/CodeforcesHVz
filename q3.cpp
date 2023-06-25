#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vs vector<string>
#define endl '\n'
#define pb push_back
#define pob pop_back
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define mod 998244353
#define rep(i, n) for (int i = 0; i < n; i++)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n, x;
    cin >> n >> x;

    vector<int> balls(n);
    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    unordered_map<int, int> lastIndex;
    int maxRemoved = 0;
    int removeStart = 0;

    for (int i = 0; i < n; i++) {
        if (lastIndex.count(balls[i]) > 0 && lastIndex[balls[i]] >= removeStart) {
            maxRemoved = max(maxRemoved, i - removeStart);
            removeStart = lastIndex[balls[i]] + 1;
        }
        lastIndex[balls[i]] = i;
    }

    maxRemoved = max(maxRemoved, n - removeStart);

    cout << maxRemoved << endl;

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
    return 0;
}
