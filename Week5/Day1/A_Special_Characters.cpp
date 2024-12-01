// week5 practice problem 1 Accepted
// A - Special Characters
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
        if (n % 2 == 1)
            cout << no;
        else
        {
            cout << yes;
            string ans;
            int i = 0;
            char c = 'A';
            while (i < n && c <= 'Z')
            {
                ans += c;
                ans += c;
                i += 2;
                c++;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}