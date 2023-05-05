#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        char mc = 'a';
        for (int i = 0; i<n; i++){
            if(mc < s[i]){
                mc = s[i];
            }
        }
        cout << mc - 'a' + 1 << endl;
    }
}