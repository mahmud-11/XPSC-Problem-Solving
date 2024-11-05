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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        int odd_cnt = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (mp[c] % 2 != 0)
                odd_cnt++;
        }

        if (odd_cnt - k <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}