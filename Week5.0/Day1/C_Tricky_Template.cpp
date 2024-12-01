// week5 practice problem 3 Accepted
// C - Tricky Template
#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
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
        string a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] != a[i] && c[i] != b[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << yes;
        else
            cout << no;
    }

    return 0;
}