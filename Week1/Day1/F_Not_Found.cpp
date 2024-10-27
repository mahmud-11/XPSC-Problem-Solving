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

    int flag = 0;
    int i = 0;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (*it != (i + 'a'))
        {
            cout << (char)(i + 'a');
            flag = 1;
            break;
        }
        i++;
    }

    if (!flag && i < 25)
        cout << (char)(i + 'a');
    else if (!flag)
        cout << "None";

    return 0;
}