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
        cin >> n;
        string name;
        cin >> name;

        if (n != 5)
        {
            cout << "NO\n";
            continue;
        }

        map<char, int> mp;
        for (char c : name)
        {
            mp[c]++;
        }

        int flag = 1;
        string s = "Timur";
        for (char c : s)
        {
            if (mp[c] < 1)
                flag = 0;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}