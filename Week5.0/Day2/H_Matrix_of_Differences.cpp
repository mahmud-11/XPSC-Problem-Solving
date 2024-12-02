// week5 practice problem 8 Accepted
// H - Matrix of Differences

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
        int mtx[n][n];
        int l = 1, u = n * n;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                    {
                        mtx[i][j] = l;
                        l++;
                    }
                    else
                    {
                        mtx[i][j] = u;
                        u--;
                    }
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (j % 2 == 0)
                    {
                        mtx[i][j] = u;
                        u--;
                    }
                    else
                    {
                        mtx[i][j] = l;
                        l++;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mtx[i][j] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}