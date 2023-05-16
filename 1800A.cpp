#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [] (char c){
        return tolower(c);
    });
    s.erase(unique(s.begin(), s.end()), s.end());
    if(s == "meow"){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
