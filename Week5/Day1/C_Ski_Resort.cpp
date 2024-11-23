// week3 topicwise problem 11 Accepted
// C. Ski Resort

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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> tmp(n);
        vector<ll> day_len;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp[i];
        }

        for (int i = 0; i < n; i++)
        {
            ll cnt = 0;
            while (i < n && tmp[i] <= q)
            {
                cnt++;
                i++;
            }
            if (cnt > 0)
            {
                day_len.push_back(cnt);
            }
        }

        ll ans = 0;
        ll sz = day_len.size();
        for (int i = 0; i < sz; i++)
        {
            ll a = day_len[i];
            if (a < k)
            {
                continue;
            }
            else
            {
                ll b = a - k + 1;
                ans += ((b * (b + 1)) / 2);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}