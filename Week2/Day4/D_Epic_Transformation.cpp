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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            m[val]++;
        }

        priority_queue<int> pq;
        for (auto [x, y] : m)
        {
            pq.push(y);
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }

            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();

            x--;
            y--;

            if (x >= 1)
            {
                pq.push(x);
            }
            if (y >= 1)
            {
                pq.push(y);
            }
        }

        int cnt = 0;
        while (!pq.empty())
        {
            cnt += pq.top();
            pq.pop();
        }

        cout << cnt << '\n';
    }

    return 0;
}