// week3 topicwise problem 9 Accepted
// B. Long Long

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
        int n;
        cin >> n;
        vector<int> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }

        int cnt = 0;
        int i = 0;
        while (i < n)
        {
            if (v[i] < 0)
            {
                cnt++;
                while (i < n && v[i] <= 0)
                    i++;
            }
            else
            {
                while (i < n && v[i] >= 0)
                    i++;
            }
        }
        cout << sum << " " << cnt << '\n';
    }

    return 0;
}