#include <bits/stdc++.h>
using namespace std;

template<typename T> istream& operator>>(istream &cin, vector<T> &v) {for(T &e: v) cin>>e; return cin;}

#define ll long long 
#define vll                  vector<ll> 
#define vpll                 vector<pair<ll,ll>>
#define vi                   vector<int>
#define vpi                  vector<pair<int, int>>
#define vvll                 vector<vector<ll>>
#define vvi                  vector<vector<int>>
#define pll                  pair<ll,ll>
#define vs                   vector<string>
#define pb                   push_back
#define pob                  pop_back()
#define all(x)               begin(x), end(x)
#define sz(x)                (int)x.size()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n, m;
    cin>>n>>m;
 
    vector<int> a(n * m);
    cin>>a;
 
    sort(a.begin(), a.end());
    int min1 = a[0], min2 = a[1], max1 = a[n * m - 1], max2 = a[n * m - 2];
 
    int ans = n * m * max1;
    ans -= max1;
    int mini_edge = min(n, m);
    ans -= min2 * (mini_edge - 1);
    ans -= min1 * (n * m - mini_edge);
 
    int ans_2 = - n * m * min1;
    ans_2 += min1;
    ans_2 += max2 * (mini_edge - 1);
    ans_2 += max1 * (n * m - mini_edge);
 
    ans = max(ans, ans_2);
 
    cout<<ans<<"\n";
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
