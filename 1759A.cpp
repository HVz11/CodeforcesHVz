#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string st;
    cin >> st;
    if (st.size() == 1)
    {
        if (st[0] == 'Y' || st[0] == 'e' || st[0] == 's')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else if (st.size() == 2)
    {
        if ((st[0] == 'Y' && st[1] == 'e') || (st[0] == 'e' && st[1] == 's') || (st[0] == 's' && st[1] == 'Y'))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    bool flag = 0;
    if (st.size() >= 3)
    {

        for (int i = 0; i < st.size() - 2; i++)
        {
            if ((st[i] == 'Y' && st[i + 1] == 'e' && st[i + 2] == 's') || (st[i] == 'e' && st[i + 1] == 's' && st[i + 2] == 'Y') || (st[i] == 's' && st[i + 1] == 'Y' && st[i + 2] == 'e'))
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
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