// week8 practice problem 1 Accepted
// A - String Game

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
        vector<char> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt_0 = 0, cnt_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                cnt_0++;
            else
                cnt_1++;
        }

        int mn = min(cnt_0, cnt_1);
        if (mn % 2 == 0)
        {
            cout << "Ramos" << '\n';
        }

        else
            cout << "Zlatan" << '\n';
        ;
    }

    return 0;
}