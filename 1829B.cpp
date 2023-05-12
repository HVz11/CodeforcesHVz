#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        int curr=0;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x == 0){
                cnt++;
            }
            else{
                cnt=0;
            }
            curr=max(curr,cnt);
        }
        cout<<curr<<endl;
    }
}