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
        ll n;
        cin >> n;
        ll total=26;
		total+=11*(n-4);
		total+=(n-4)*(n-5);
		cout<<total<<endl;
    }
    return 0;
}