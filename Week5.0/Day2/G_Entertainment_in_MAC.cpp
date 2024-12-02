// week5 practice problem 7 Accepted
// G - Entertainment in MAC

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
        string s, ss;
        cin >> s;
        ss = s;
        reverse(ss.begin(), ss.end());
        string s2, ans;
        s2 = ss + s;
        ans = min(s, s2);
        cout << ans << '\n';
    }

    return 0;
}