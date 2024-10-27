#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = 0;
    int i = 1;
    while (ans < b && i <= a)
    {
        ans = c * i;
        if (ans >= a && ans <= b)
        {
            cout << ans;
            break;
        }
        else
            ans = 0;
        i++;
    }
    if (!ans)
        cout << "-1";
    return 0;
}