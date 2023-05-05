#include<bits/stdc++.h>
using namespace std;

 
int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    
    int size = s.length();
 
    string new_st = "";
    for (int i = size -1; i >= 0; i--) {
        new_st += s[i];
    }
    cout <<  s + new_st << endl;
    
    }
}