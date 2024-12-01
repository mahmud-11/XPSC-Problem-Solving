// week5 practice problem 4 Accepted
// D - Preparing for the Contest

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
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        for (int i = n - k; i > 0; i--)
        {
            ans.push_back(i);
        }
        for (int i = n - k + 1; i <= n; i++)
        {
            ans.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}