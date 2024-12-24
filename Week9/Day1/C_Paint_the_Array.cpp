// week9 topicwise problem 2 Accepted
// C. Paint the Array

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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll G1 = 0, G2 = 0;
        for (int i = 0; i < n; i += 2)
            G1 = __gcd(G1, a[i]);

        for (int i = 1; i < n; i += 2)
            G2 = __gcd(G2, a[i]);

        ll ans = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
            if (a[i] % G1 == 0)
                flag = false;

        if (flag)
            ans = G1;
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
                if (a[i] % G2 == 0)
                    flag = false;

            if (flag)
                ans = G2;
        }

        cout << ans << '\n';
    }

    return 0;
}