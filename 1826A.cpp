#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
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
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int ans = -1;
        for (int k = 0; k <= n; k++){ // k liars
            int truth = 0, lie = 0;
            for (int i = 1; i <= n; i++){
                if (k >= a[i]){
                    truth++;
                }
                else{
                    lie++;
                }
            }
            if (lie == k){
                ans = k;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}