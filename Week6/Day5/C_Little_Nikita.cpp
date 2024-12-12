// week6 practice problem 3 Accepted
// A. Little Nikita
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
        int n, m;
        cin >> n >> m;
        if (n == m)
            cout << yes;
        else if (n > m && (n - m) % 2 == 0)
            cout << yes;
        else
            cout << no;
    }

    return 0;
}