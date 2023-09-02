#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v)
{
    for (T &e : v)
        cin >> e;
    return cin;
}

#define int long long
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vs vector<string>
#define endl '\n'
#define pb push_back
#define pob pop_back
#define all(x) x.begin(), x.end()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    string s;
    cin >> s;
    if(s.find("1") < s.find("7")){
        cout << 17 << endl;
    }
    else{
        cout << 71 << endl;
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
}
