#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;

    for (int i = 0; i < 2; i++)
    {
        if (a < b)
        {
            ans += b;
            b--;
        }
        else
        {
            ans += a;
            a--;
        }
    }

    cout << ans;
    return 0;
}