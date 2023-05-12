#include <bits/stdc++.h>
#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int ans = 1;
        if (s[0] == '0'){
            ans = 0;
        }
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '?'){
                ans *= (10 - (i == 0));
            }
        }
        cout << ans << endl;
    }
}