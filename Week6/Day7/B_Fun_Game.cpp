// week6 topicwise problem 4 Acepted
// B. Fun Game

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            cout << yes;
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i] && pos > i)
                {
                    cout << no;
                    flag = false;
                    break;
                }
            }

            if (flag)
                cout << yes;
        }
        else
            cout << no;
    }

    return 0;
}