#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int value = 0;
    if (s[0] == '1')
    {
        value = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (value > 0)
            {
                cout << "-";
                value--;
            }
            else
            {
                cout << "+";
                value++;
            }
        }
        else
        {
            cout << "-";
        }
    }
    cout << endl;
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