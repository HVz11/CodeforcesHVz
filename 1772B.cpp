#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m[4];
    int temp[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> m[i];
        temp[i] = m[i];
    }
    sort(temp, temp +4);
    if (m[0] == temp[0] && m[3] == temp[3] || m[1] == temp[0] && m[2] == temp[3])
    {
        cout << "YES" << endl;
    }
    else if (m[3] == temp[0] && m[0] == temp[3] || m[2] == temp[0] && m[1] == temp[3])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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