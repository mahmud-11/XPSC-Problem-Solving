// week4 practice problem 4 Accepted
// D - Payment Without Change

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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll d = s % n;
        ll sum_a = a * n;
        ll final_sum = sum_a + b;

        if (sum_a > s)
        {
            if (d <= b)
                cout << yes;
            else
                cout << no;
        }
        else if (final_sum >= s)
        {
            cout << yes;
        }
        else
            cout << no;
    }

    return 0;
}