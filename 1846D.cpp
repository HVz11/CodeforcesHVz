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
#define pb push_back()
#define pob pop_back()
#define all(x) x.begin(), x.end()
#define mod 998244353

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(){
    int n;
    cin >> n;
    double d, h;
    cin  >> d >> h;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    double Total_area = n*(0.5*d*h); 
    for(int i=1; i<n; i++){
        if(arr[i] - arr[i-1] < h){
            double overlap_h, overlap_d;
            overlap_h = h - (arr[i]-arr[i-1]);
            overlap_d = overlap_h*d/h;
            double overlap_area = 0.5*overlap_d*overlap_h;
            Total_area -= overlap_area;
        } 
    }
    cout << fixed << setprecision(10) << Total_area << endl;
}

int32_t main(){
    fio;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
