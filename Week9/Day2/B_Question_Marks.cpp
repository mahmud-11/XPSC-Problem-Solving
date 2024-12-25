// week9 practic problem 2 Accepted
// B - Question Marks

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
        int A = 0, B = 0, C = 0, D = 0;
        for (char c : s)
        {
            if (c == 'A')
                A++;
            else if (c == 'B')
                B++;
            else if (c == 'C')
                C++;
            else if (c == 'D')
                D++;
        }

        int ans = 0;
        if (A > n)
            ans += n;
        else
            ans += A;
        if (B > n)
            ans += n;
        else
            ans += B;
        if (C > n)
            ans += n;
        else
            ans += C;
        if (D > n)
            ans += n;
        else
            ans += D;

        cout << ans << '\n';
    }

    return 0;
}