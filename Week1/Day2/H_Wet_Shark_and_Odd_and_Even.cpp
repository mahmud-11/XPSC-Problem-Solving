#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> odd_v;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 1)
            odd_v.push_back(v[i]);
    }

    sort(odd_v.begin(), odd_v.end());

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (sum % 2 == 0)
        {
            cout << sum << "\n";
            return 0;
        }
        else
            sum -= odd_v[i];
    }

    cout << sum << "\n";

    return 0;
}