#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<char> s;
    char c;
    while (cin >> c)
    {
        s.insert(c);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (s.find(ch) == s.end())
        {
            cout << ch << '\n';
            return 0;
        }
    }

    cout << "None\n";

    return 0;
}
