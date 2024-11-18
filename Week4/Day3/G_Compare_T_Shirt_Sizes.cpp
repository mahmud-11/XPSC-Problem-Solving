// week3 practice problem 7 Accepted
// G - Compare T-Shirt Sizes

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
        string s1, s2;
        cin >> s1 >> s2;
        map<char, int> mp1;
        map<char, int> mp2;
        for (char c : s1)
        {
            mp1[c]++;
        }
        for (char c : s2)
        {
            mp2[c]++;
        }

        if (s1 == s2)
            cout << "=\n";
        else
        {
            if (mp1['S'] == 1 && mp2['S'] == 1)
            {
                if (mp1['X'] > mp2['X'])
                    cout << "<\n";
                else
                    cout << ">\n";
            }

            else if (mp1['L'] == 1 && mp2['L'] == 1)
            {
                if (mp1['X'] < mp2['X'])
                    cout << "<\n";
                else
                    cout << ">\n";
            }

            else if (mp1['S'] == 1 && (mp2['M'] == 1 || mp2['L'] == 1))
            {
                cout << "<\n";
            }

            else if (mp1['M'] == 1 && mp2['L'] == 1)
            {
                cout << "<\n";
            }

            else
                cout << ">\n";
        }
    }

    return 0;
}