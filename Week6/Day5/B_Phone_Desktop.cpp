// week6 practice problem 2 Accepted
// A. Phone Desktop

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
        int x, y;
        cin >> x >> y;

        int z = ceil(y / 2.0);
        int ext_c = (z * 15 - y * 4);
        int ans = z;
        if (x > ext_c)
        {
            ans += ceil((x - ext_c) / 15.0);
        }

        cout << ans << '\n';
    }

    return 0;
}