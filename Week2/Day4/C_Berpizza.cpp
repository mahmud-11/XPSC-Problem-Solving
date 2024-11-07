#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, serial = 1;
    cin >> t;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> ans;
    while (t--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int customar;
            cin >> customar;
            s.insert({serial, customar});
            ms.insert({customar, -serial});
            serial++;
        }

        else if (q == 2)
        {
            int srl = s.begin()->first, cmr = s.begin()->second;
            ans.push_back(srl);

            s.erase({srl, cmr});
            ms.erase({cmr, -srl});
        }
        else
        {
            int cmr = ms.rbegin()->first, srl = -ms.rbegin()->second;
            ans.push_back(srl);

            s.erase({srl, cmr});
            ms.erase(--ms.end());
        }
    }
    for (auto srl : ans)
    {
        cout << srl << " ";
    }

    return 0;
}