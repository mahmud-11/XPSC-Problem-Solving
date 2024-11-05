#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 1; i <= n; i++)
    {
        int pbm;
        cin >> pbm;
        ms.insert(pbm);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        auto it = ms.lower_bound(i);
        if (it != ms.end())
        {
            cnt++;
            ms.erase(it);
        }
    }

    cout << cnt;

    return 0;
}