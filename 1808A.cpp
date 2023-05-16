#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int solve(int num){
    string s = to_string(num);
    sort(s.begin(), s.end());
    return (s.back() - s[0]);
}

void solve(){
    int l, r;
    cin >> l >> r;
    int ans = -1;
    int lno;
    for (int i = l; i <= r; i++){
        int val = solve(i);
        if (ans < val){
            ans = val;
            lno = i;
        }
        if (ans == 9)
            break;
    }
    cout << lno << endl;
}

int main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}