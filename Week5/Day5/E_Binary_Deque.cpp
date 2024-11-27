//  week4 practice problem 7 Accepted
// E. Binary Deque

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
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        if (total_sum < s)
        {
            cout << -1 << '\n';
            continue;
        }

        int cnt = 0, sum = 0;
        int l = 0, r = 0;
        int cnt_0 = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum == s)
            {
                cnt = max(cnt, r - l + 1);
            }
            else
            {
                while (sum > s && l <= r)
                {
                    sum -= a[l];
                    l++;
                }
            }
            r++;
        }
        int ans = n - cnt;
        cout << ans << '\n';
    }

    return 0;
}
