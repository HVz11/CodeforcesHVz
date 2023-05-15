#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void solve(){
     int n; cin>>n;
	vector<int> ans(n);
	if(n == 1){
		cout<<"1\n"; return;
	}
	if(n%2 == 1){
		cout<<"-1\n";
		return;
	}
	for(int i = 0; i < n; i += 2){
		ans[i] = i+2;
	}
	for(int i = 1; i < n; i += 2){
		ans[i] = i;
	}
	for(int i = 0; i < n; i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";   
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