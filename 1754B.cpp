#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int Q = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Q'){
                Q++;
            }
            else{
                Q--;
            }
            if (Q <= 0){
                Q = 0;
            }
        }
        if (Q == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
