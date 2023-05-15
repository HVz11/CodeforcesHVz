#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void solve(){
     int n; cin>>n; 
     int arr[n];
     for(int i = 0; i < n; i++){
        cin >> arr[i];
     }
    bool good = false;
		for (int i = 0; i < n; i++) {
			if (arr[i] <= i+1) {
				good = true;
			}
		}
		cout << (good ? "YES" : "NO") << '\n';
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