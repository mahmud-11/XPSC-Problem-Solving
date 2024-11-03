#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int cnt = 0;
    int i = 0;
    for (char c : s)
    {
        if (c != t[i])
            cnt++;
        i++;
    }
    cout << cnt << '\n';

    return 0;
}