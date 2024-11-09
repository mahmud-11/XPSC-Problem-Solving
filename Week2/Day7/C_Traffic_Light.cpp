// week2 topicwise problem 12 Accepted
// C. Traffic Light

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
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        s += s;
        int c_idx = 0, ans = 0;
        bool f = false;
        for (int i = 0; i < 2 * n; i++)
        {
            if (f == false && s[i] == c)
            {
                c_idx = i;
                f = true;
            }

            if (f == true && s[i] == 'g')
            {
                ans = max(ans, i - c_idx);
                f = false;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}