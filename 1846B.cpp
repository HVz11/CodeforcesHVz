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
    char board[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        if((board[i][0] != '.') && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2])){
            cout << board[i][0] << endl;
            return;
        }
    }
    for(int j = 0; j < 3; j++){
        if((board[0][j] != '.') && (board[0][j] == board[1][j]) && (board[1][j] == board[2][j])){
            cout << board[0][j] << endl;
            return;
        }
    }
    if((board[0][0] != '.') && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])){
        cout << board[0][0] << endl;
        return;
    }

    if((board[0][2] != '.') && (board[0][2] == board[1][1]) && (board[1][1] == board[2][0])){
        cout << board[0][2] << endl;
        return;
    }
    else{
        cout << "DRAW" << endl;
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
