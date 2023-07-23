#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &cin, vector<T> &v){
    for (T &e : v)
        cin >> e;
    return cin;
}

#define int long long
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vs vector<string>
#define endl '\n'
#define pb push_back
#define pob pop_back
#define all(x) x.begin(), x.end()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve(){
    int n, c;
    cin >> n >> c;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int s=1, e=1e9;
    while(s <= e){
        int mid = s + (e-s)/2;
        int sumall=0;
        for(int i=0; i<n; i++){
            sumall += (arr[i] + 2*mid)*(arr[i] + 2*mid);
            if(sumall > c){
                break;
            }
        }
        if(sumall == c){
            cout << mid << endl;
        }
        if(sumall > c){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
