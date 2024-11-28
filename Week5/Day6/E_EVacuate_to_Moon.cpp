// week3 practice problem 5 Accepted
// E - EVacuate to Moon

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        priority_queue<int> capacity;
        priority_queue<int> power;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            capacity.push(val);
        }
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            power.push(val);
        }

        ll ans = 0;
        while (!capacity.empty() && !power.empty())
        {
            ll x = (ll)power.top() * h;
            if (x > capacity.top())
                ans += capacity.top();
            else
                ans += x;

            capacity.pop();
            power.pop();
        }

        cout << ans << nl;
    }

    return 0;
}