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

void solve(){
    int n,k,a,b;
	cin >> n >> k >> a >> b;
	a--; b--;
	int x[n], y[n];
	for(int i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}
 
	int dis1 = 1e10;
	int dis2 = 1e10;
 
	for(int i=0; i<k; i++){
		dis1 = min(dis1, abs(x[i]-x[a]) + abs(y[i]-y[a]));
		dis2 = min(dis2, abs(x[i]-x[b]) + abs(y[i]-y[b]));
	} 
 
	cout << min(dis1 + dis2, abs(x[a]-x[b]) + abs(y[a]-y[b])) << endl;  
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
