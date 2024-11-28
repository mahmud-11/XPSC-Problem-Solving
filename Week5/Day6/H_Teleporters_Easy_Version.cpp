//  week4 practice problem 8 Accepted
// H - Teleporters (Easy Version)

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
        ll c;
        cin >> n >> c;
        vector<int> tp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> tp[i];
        }

        vector<ll> cost_use_tp;
        for (int i = 0; i < n; i++)
        {
            cost_use_tp.push_back(tp[i] + i + 1);
        }

        sort(cost_use_tp.begin(), cost_use_tp.end());

        ll sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum += cost_use_tp[i];
            if (sum <= c)
            {
                cnt++;
            }
            else
                break;
        }

        cout << cnt << '\n';
    }

    return 0;
}