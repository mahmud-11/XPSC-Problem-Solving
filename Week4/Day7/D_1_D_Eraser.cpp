// week3 topicwise problem 7 Accepted
// D. 1D Eraser

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
        string s;
        cin >> s;

        int ans = 0;
        int r = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                r += k;
                ans++;
            }
            else
                r++;
        }

        cout << ans << '\n';
    }

    return 0;
}