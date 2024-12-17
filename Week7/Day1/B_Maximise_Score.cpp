// week8 practice problem 2
// B - Maximise Score

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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = min(abs(a[0] - a[1]), abs(a[n - 1] - a[n - 2]));
        for (int i = 1; i < n - 1; i++)
        {
            int x = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            ans = min(x, ans);
        }

        cout << ans << '\n';
    }

    return 0;
}