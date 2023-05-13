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
        int n,k;
        cin >> n >> k;

        k = (n * (n - 1)) / 2 - k;
        int x = -1;
        for (int i = 0; i <= n; i++){
            if (i * (n - i) == k){
                x = i;
            }
        }

        if (x == -1){
            cout << "NO";
        }

        else{
            cout << "YES\n";
            for (int i = 0; i < x; i++)
            {
                cout << 1 << ' ';
            }

            for (int i = 0; i < n - x; i++)
            {
                cout << -1 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}