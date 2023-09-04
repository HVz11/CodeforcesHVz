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
    int n, a, q;
    cin >> n >> a >> q;
    string st;
    cin >> st;
    int max_online = a;
	int total_online = a;
	for(int i=0; i<q; i++){
		if(st[i]=='+'){
			total_online++;
			a++;
			max_online=max(max_online,a);
		}
        else{
			a--;
		}
	}
	if(max_online >= n){
		cout << "YES" << endl;
	}
    else if(total_online >= n){
		cout << "MAYBE" << endl;
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
}
