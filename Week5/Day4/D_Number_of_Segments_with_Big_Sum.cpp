// week4 topicwise problem 4 Accepted
// C. Number of Segments with Big Sum

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];

        while (sum >= s)
        {
            ans += n - r;
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << ans;

    return 0;
}