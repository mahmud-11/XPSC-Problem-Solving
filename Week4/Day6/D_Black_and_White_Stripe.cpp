// week3 topicwise problem 6 Accepted
// D. Black and White Stripe

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt = 0;
        int ans = INT_MAX;
        int l = 0, r = 0;
        while (r < n)
        {
            if (s[r] == 'W')
                cnt++;
            if (r - l + 1 == k)
            {
                ans = min(ans, cnt);
                if (s[l] == 'W')
                    cnt--;
                l++;
            }
            r++;
        }

        cout << ans << '\n';
    }

    return 0;
}