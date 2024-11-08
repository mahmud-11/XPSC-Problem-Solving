// week2 topicwise problem 8 Accepted
// C1. Powering the Hero (easy version)

#include <bits/stdc++.h>
#define ll long long
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
        priority_queue<ll> pq;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == 0 && !pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(val);
            }
        }

        cout << sum << '\n';
    }

    return 0;
}