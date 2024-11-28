// week3 practice problem 9 Accepted
// I - Premutation

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
#define nl '\n'
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
        vector<int> arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int val;
                cin >> val;
                arr[i].push_back(val);
            }
            mp[arr[i][0]]++;
        }

        int mx_cnt_val;
        int ans;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i][0]] > 1)
                mx_cnt_val = arr[i][0];
        }

        cout << mx_cnt_val << " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != mx_cnt_val)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    cout << arr[i][j] << " ";
                }
                break;
            }
        }

        cout << nl;
    }

    return 0;
}