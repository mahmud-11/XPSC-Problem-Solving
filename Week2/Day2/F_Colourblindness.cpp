#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string f1, f2;
        cin >> f1 >> f2;
        for (int i = 0; i < n; i++)
        {
            if (f1[i] == 'G')
                f1[i] = 'B';
            if (f2[i] == 'G')
                f2[i] = 'B';
        }

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (f1[i] != f2[i])
            {
                flag = 0;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}