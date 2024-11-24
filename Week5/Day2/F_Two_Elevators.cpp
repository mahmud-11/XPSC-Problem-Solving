// week4 practice problem 6 Accepted
// F - Two Elevators

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
        int a, b, c;
        cin >> a >> b >> c;

        int a_cost, b_cost;
        a_cost = a - 1;

        if (c > b)
            b_cost = (c - b) + (c - 1);
        else
            b_cost = b - 1;

        if (a_cost < b_cost)
            cout << "1\n";
        else if (a_cost > b_cost)
            cout << "2\n";
        else
            cout << "3\n";
    }

    return 0;
}