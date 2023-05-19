#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

void solve(){
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (auto u : s){
        cnt[u - 'a']++;
    }

    int tot = 0;
    for (int i = 0; i < 26; i++){
        if (cnt[i] > 1){
            tot++;
        }
    }

    if (tot > 1){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
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
