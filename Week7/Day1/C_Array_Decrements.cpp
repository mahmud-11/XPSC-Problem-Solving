// week8 practice problem 3 Accepted
// C - Array Decrements

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int mx = 0;
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            int x = a[i] - b[i];
            if (x > 0)
            {
                mx = max(mx, x);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int x = a[i] - b[i];
            if (b[i] > 0 && x != mx)
            {
                flag = 0;
                break;
            }
            else if (b[i] == 0 && x > mx)
            {
                flag = 0;
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