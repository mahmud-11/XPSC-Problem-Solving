// week4 topicwise problem 2
// B. Segment with Big Sum

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;
    int ans = INT_MAX;
    int l = 0, r = 0;
    while (r < n)
    {

        sum += v[r];

        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX)
        ans = -1;
    cout << ans;

    return 0;
}