//  week4 practice problem 9 Accepted
// I - Assembly via Minimums

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

        int m = (n * (n - 1) / 2);
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            ;
        }

        sort(b.begin(), b.end(), greater<>());

        int j = 1;
        cout << b[0] << " ";
        for (int i = 0; i < m; i += j)
        {
            cout << b[i] << " ";
            j++;
        }
        cout << '\n';
    }

    return 0;
}