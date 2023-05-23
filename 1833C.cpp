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
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);

    if(arr[0] % 2 == 1){
        cout << "YES" << endl;
        return;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i] % 2 != arr[i + 1] % 2){
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
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
