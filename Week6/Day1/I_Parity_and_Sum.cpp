// week5 practice problem 9 Accepted
// I - Parity and Sum

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> even;
        ll s = -1;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            if (val % 2 == 0)
            {
                even.push_back(val);
            }
            else if (val > s)
            {
                s = val;
            }
        }

        sort(even.begin(), even.end());

        int sz = even.size();
        if (s == -1 || !sz)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = even.size();
        for (int i = 0; i < sz; i++)
        {
            ll x = even[i];
            if (x < s)
                s += x;
            else
            {
                ans++;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}