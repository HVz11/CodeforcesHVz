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

    vi books(n);
    for (int i = 0; i < n; i++){
        cin >> books[i];
    }

    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        books[i] |= temp;
    }

    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        books[i] |= temp;
    }
    int know = 0;

    sort(all(books));
    for (int i = 0; i < 3*n; i++){
        if ((x | books[i]) <= x){
            know |= books[i];
        }
    }

    if (know == x){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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
