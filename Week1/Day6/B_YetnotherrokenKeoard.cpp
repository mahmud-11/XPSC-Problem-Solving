#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s, ans_s;
        cin >> s;
        int sz = s.size();
        int low = 0, up = 0;
        for (int i = sz - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
                low++;
            if (s[i] == 'B')
                up++;

            if (s[i] != 'b' && s[i] != 'B')
            {
                if (low > 0 && islower(s[i]))
                {
                    low--;
                    continue;
                }
                if (up > 0 && isupper(s[i]))
                {
                    up--;
                    continue;
                }
                ans_s.push_back(s[i]);
            }
        }

        reverse(ans_s.begin(), ans_s.end());

        if (!ans_s.empty())
            cout << ans_s << '\n';
        else
            cout << '\n';
    }

    return 0;
}