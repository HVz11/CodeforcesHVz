#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k ;
    int arr[n];
    for( int i =1; i<=n; i++){
        cin >> arr[i];
    }
    int cnt=0;
    for(int i=1; i<=n; i++ ){
        if((arr[i] -i)%k != 0){
            cnt++;
            continue;
        }
    }
    if(cnt == 0){
        cout << 0 << endl;
        return;
    }
    else if(cnt == 2){
        cout << 1 << endl;
        return;
    }
    else{
        cout << -1 << endl;
        return;
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