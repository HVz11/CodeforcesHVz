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
#define pb push_back()
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
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int left=0, right=n-1, half=n/2;
    int max_cost =0;
    while(half>0){
        int cost = a[right] - a[left];
        max_cost += cost;
        half--;
        left++;
        right--;
    }
    cout << max_cost << endl;
}
int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
