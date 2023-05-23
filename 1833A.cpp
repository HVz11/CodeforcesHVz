#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    set<string> st;
    for(int i=0; i<n-1; i++){
        st.insert(s.substr(i, 2));
    }
    cout << st.size() << endl;
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
