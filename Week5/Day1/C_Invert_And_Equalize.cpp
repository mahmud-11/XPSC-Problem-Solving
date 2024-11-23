// week4 practice problem 3
// C - Invert And Equalize

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
        string s;
        cin >> s;
        vector<int> v_0, v_1;

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            while (i < n && s[i] == '0')
            {
                cnt++;
                i++;
            }
            if (cnt > 0)
            {
                v_0.push_back(cnt);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            while (i < n && s[i] == '1')
            {
                cnt++;
                i++;
            }
            if (cnt > 0)
            {
                v_1.push_back(cnt);
            }
        }

        int sz_0 = v_0.size();
        int sz_1 = v_1.size();

        int ans = min(sz_0, sz_1);

        cout << ans << '\n';
    }
    return 0;
}