// week4 topicwise problem 5
// E. Segments with Small Set

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    map<int, int> mp;
    int l = 0, r = 0;
    while (r < n)
    {
        mp[a[r]]++;
        int sz;
        sz = mp.size();

        if (sz <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sz > k && l <= r)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                    mp.erase(a[l]);
                l++;
                sz = mp.size();
            }

            if (sz <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout << ans;
    return 0;
}