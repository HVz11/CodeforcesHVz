#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v)
{
    for (T &e : v)
        cin >> e;
    return cin;
}

#define ll long long
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvll vector<vector<ll>>
#define vvi vector<vector<int>>
#define pll pair<ll, ll>
#define vs vector<string>
#define pb push_back
#define pob pop_back()
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string st;
    int i = 0;
    while (i < n){
        st += s[i];
        for (int j = i + 1; j < n; j++){
            if (s[j] == s[i]){
                i = j + 1;
                break;
            }
        }
    }
    cout << st << endl;
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
