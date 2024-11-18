// week3 practice problem 8 Accepted
// H - Line

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
        string s;
        cin >> s;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                sum += n - i - 1;
            else
                sum += i;
        }

        vector<int> dif;
        for (int i = 0; i < n; i++)
        {
            int prv, change;
            if (s[i] == 'R')
            {
                prv = n - i - 1;
                change = i;
                if (prv < change)
                    dif.push_back(change - prv);
                else
                    dif.push_back(0);
            }

            else
            {
                prv = i;
                change = n - i - 1;
                if (prv < change)
                    dif.push_back(change - prv);
                else
                    dif.push_back(0);
            }
        }

        sort(dif.begin(), dif.end(), greater<>());

        for (int i = 0; i < n; i++)
        {
            sum += dif[i];
            cout << sum << " ";
        }
        cout << '\n';
    }

    return 0;
}