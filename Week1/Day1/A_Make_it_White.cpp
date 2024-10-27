#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int point1, point2;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (flag == 0)
                {
                    point1 = i;
                    flag = 1;
                }
                point2 = i;
            }
        }

        int ans = (point2 - point1) + 1;

        cout << ans << endl;
    }
    return 0;
}