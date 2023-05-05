#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x1; int y1;
    cin >> x1 >> y1;
    int x2; int y2;
    cin >> x2 >> y2;
    int x3; int y3;
    cin >> x3 >> y3;
   
    if ((x1 == x2 || x1 == x3 || x2 == x3) && (y1 == y2 || y1 == y3 || y2 == y3))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}