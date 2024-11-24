// week4 practice problem 7 Accepted
// G - Decode String

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

        string v;
        cin >> v;

        string ans = {};
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != '0')
            {
                ans += char(v[i] + '0');
            }

            else
            {
                i--;
                char a = ((v[i - 1] - '0') * 10 + (v[i] - '0')) + '0';
                i--;
                ans += char(a + '0');
            }
        }
        reverse(ans.begin(), ans.end());

        cout << ans << '\n';
    }

    return 0;
}