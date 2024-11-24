// week4 practice problem 5
// E - Jellyfish and Undertale

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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll time = b;
        ll n_t;
        for (int i = 0; i < n; i++)
        {
            n_t = min(v[i] + 1, a);
            time += n_t - 1;
        }

        cout << time << '\n';
    }

    return 0;
}