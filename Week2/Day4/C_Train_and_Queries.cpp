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
        int n, k;
        cin >> n >> k;
        map<int, set<int>> station;
        for (int i = 0; i < n; i++)
        {
            int st;
            cin >> st;
            station[st].insert(i);
        }

        while (k--)
        {
            int aj, bj;
            cin >> aj >> bj;
            if (station.find(aj) == station.end() || station.find(bj) == station.end())
                cout << "NO\n";
            else
            {
                int stratingStationLeftMostIdx, endingStationRightMostIdx;
                stratingStationLeftMostIdx = *station[aj].begin();
                endingStationRightMostIdx = *station[bj].rbegin();
                if (stratingStationLeftMostIdx < endingStationRightMostIdx)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}