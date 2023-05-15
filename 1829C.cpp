#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int x=1e6, y=1e6, ans=1e6;
        for(int i=0;i<n;i++){
        	int a;
        	string b;
        	cin >> a >> b;
        	if(b == "11"){
        		ans = min(ans,a);
        	}
        	else if(b == "01"){
        		y = min(y,a);
        	}
        	else if(b == "10"){
        		x = min(x,a);
        	}
        }
        ans = min(ans,x+y);
        if(ans == 1e6){
        	cout << -1 << endl;
        }
        else {
        	cout << ans <<endl;
        }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}