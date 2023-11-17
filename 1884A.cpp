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

int solve() {
    int x, k;
    cin >> x >> k;
    while (true) {
        int sum_of_digits = 0;
        int y = x;
        while (y > 0){
            sum_of_digits += y % 10;
            y /= 10;
        }
        if (sum_of_digits % k == 0){
            return x;
        }
        x++;
    }
}
    

int32_t main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int y = solve();
        cout << y << endl;
    }
}
