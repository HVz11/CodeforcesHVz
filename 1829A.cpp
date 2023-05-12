#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t = "codeforces";
        ll ans =0;
        for(ll i = 0; i<=10; i++){
            if(s[i] != t[i]){
                ans++;
            }
        }
        cout <<ans<< endl;
    }
    return 0;
}