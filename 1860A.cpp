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
    int n = s.size();
    string t1 = "", t2 = "";
    string a = "", b = "";
    for(int i=0; i<n; i++){
        a += "(";
        b += ")";
    }
    t1 = a + b;

    for(int i=0; i<n; i++){
        t2 += "()";
    }

    if(t1.find(s) == string::npos){
        cout << "YES" << endl;
        cout << t1 << endl;
    }
    else if(t2.find(s) == string::npos){
        cout << "YES" << endl;
        cout << t2 << endl;
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
