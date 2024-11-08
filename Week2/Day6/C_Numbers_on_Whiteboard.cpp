// week2 topicwise problem 10 Accepted
// C. Numbers on Whiteboard

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

        multiset<int> ms;
        for (int i = 1; i <= n; i++)
        {
            ms.insert(i);
        }

        vector<pair<int, int>> ans;
        for (int i = 1; i < n; i++)
        {
            int a = *--ms.end();
            ms.erase(--ms.end());

            int b = *--ms.end();
            ms.erase(--ms.end());

            int oper = round((a + b) / 2.0);
            ms.insert(oper);

            ans.push_back({a, b});
        }

        cout << *ms.begin() << '\n';

        for (auto pr : ans)
        {
            cout << pr.first << " " << pr.second << '\n';
        }
    }

    return 0;
}