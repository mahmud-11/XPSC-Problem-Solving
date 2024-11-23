// week4 practice problem 2 Accepted
// B - Football Ties

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
        int team_a, team_b;
        cin >> team_a >> team_b;

        int ans = min(team_a % 3, team_b % 3);
        cout << ans << '\n';
    }

    return 0;
}