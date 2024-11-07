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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int flag = 0;
        int mn = 1;
        int mx = n;
        int i = 1, j = n;
        while (i < j)
        {

            if (v[i] == mn && v[j] == mx || v[i] == mx && v[j] == mn)
            {
                i++, j--;
                mn++, mx--;
            }

            else if (v[i] == mn)
            {
                i++;
                mn++;
            }
            else if (v[i] == mx)
            {
                i++;
                mx--;
            }

            else if (v[j] == mn)
            {
                j--;
                mn++;
            }
            else if (v[j] == mx)
            {
                j--;
                mx--;
            }

            else
            {
                cout << i << " " << j << '\n';
                flag = 1;
                break;
            }
        }

        if (!flag)
            cout << "-1\n";
    }

    return 0;
}