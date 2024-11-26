// week4 topicwise problem 6 Accepted
// F. Segments with Small Spread

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
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    multiset<ll> ml;
    int l = 0, r = 0;
    while (r < n)
    {
        ml.insert(a[r]);
        ll mn, mx;
        mn = *ml.begin();
        mx = *ml.rbegin();

        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (mx - mn > k && l <= r)
            {
                ml.erase(ml.find(a[l]));
                mn = *ml.begin();
                mx = *ml.rbegin();
                l++;
            }

            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout << ans;
    return 0;
}