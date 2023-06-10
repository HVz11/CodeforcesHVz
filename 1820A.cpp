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
#define pob pop_back()
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
   string s;
   cin>>s;
   int ans=0;
   
   if(s =="^"){
    cout<< 1 << endl;
    return;
   }

   if(s[0] == '_'){
    ans++;
   }
   if(s.back() == '_'){
    ans++;
   }

   for(int i=0; i<s.size()-1; i++){
    if(s[i] =='_' && s[i+1] == '_'){
        ans++;
    }
   }
   cout << ans << endl;
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
