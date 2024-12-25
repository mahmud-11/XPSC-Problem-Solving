// week9 topicwise problem 5 Accepted
// Large Factorial

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            ans = (1LL * ans % MOD * i % MOD) % MOD;
        }
        cout << ans << '\n';
    }

    return 0;
}