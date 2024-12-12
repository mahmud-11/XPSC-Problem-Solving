// week6 practice problem 1 Accepted
// A - Bazoka and Mocha's Array

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
        vector<int> a(n), new_a;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int pos = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                pos = i;
                break;
            }
        }

        if (pos == -1)
            cout << yes;
        else
        {
            int flag = 1;
            for (int i = pos + 1; i < n; i++)
            {
                new_a.push_back(a[i]);
            }
            for (int i = 0; i <= pos; i++)
            {
                new_a.push_back(a[i]);
            }

            for (int i = 0; i < n - 1; i++)
            {
                if (new_a[i] > new_a[i + 1])
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
    }

    return 0;
}