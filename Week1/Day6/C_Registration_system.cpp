#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s] < 1)
        {
            cout << "OK\n";
            mp[s]++;
        }
        else
        {
            while (true)
            {
                string sug = s + to_string(mp[s]);
                if (mp[sug] < 1)
                {
                    cout << sug << '\n';
                    mp[s]++;
                    mp[sug]++;
                    break;
                }
            }
        }
    }
    return 0;
}