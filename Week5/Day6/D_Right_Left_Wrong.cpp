// week4 topicwise problem 9 Accepted
// D. Right Left Wrong

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;

        vector<ll> pre_sum(n);
        pre_sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre_sum[i] = a[i] + pre_sum[i - 1];
        }

        ll ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] != 'L')
                l++;
            if (s[r] != 'R')
                r--;

            if (s[l] == 'L' && s[r] == 'R')
            {
                ll l_sum, r_sum;
                if (l == 0)
                    l_sum = 0;
                else
                    l_sum = pre_sum[l - 1];
                ans += pre_sum[r] - l_sum;
                l++;
                r--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}