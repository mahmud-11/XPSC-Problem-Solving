// week2 topicwise problem 14 Accepted
// D. Matryoshkas

#include <bits/stdc++.h>
#define ll long long
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
        map<ll, int> mp;
        multiset<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            mp[a]++;
            s.insert(a);
        }

        int cnt = 0;
        for (ll a : s)
        {
            ll val = a;
            if (mp[val] != 0)
                cnt++;
            while (mp[val] > 0)
            {
                mp[val]--;
                val++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}