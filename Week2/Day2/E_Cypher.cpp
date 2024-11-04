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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            for (int j = 0; j < m; j++)
            {
                char b;
                cin >> b;
                if (b == 'U')
                {
                    if (arr[i] == 0)
                        arr[i] = 9;
                    else
                        arr[i]--;
                }

                else if (b == 'D')
                {
                    if (arr[i] == 9)
                        arr[i] = 0;
                    else
                        arr[i]++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}