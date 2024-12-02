// week5 practice problem 6 Accepted
// F - BAN BAN
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

        int ope;
        if (n % 2 == 0)
            ope = n / 2;
        else
            ope = n / 2 + 1;

        cout << ope << '\n';

        int l = 1, r = n * 3;
        while (l < r)
        {
            cout << l << " " << r << '\n';
            l += 3;
            r -= 3;
        }
    }

    return 0;
}