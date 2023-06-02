#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
        a += b;
        int cnt = 0;
        for (int i = 0; i < n + m - 1; i++) {
            cnt += (a[i] == a[i + 1]);
        }
        if (cnt <= 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
int main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
