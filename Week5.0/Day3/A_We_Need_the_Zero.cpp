// week5 topicwise problem 3 Accepted
// A. We Need the Zero

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
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }

        // cout << XOR << " ";
        if (n % 2 == 1)
        {
            cout << XOR << '\n';
        }
        else
        {
            if (XOR == 0)
                cout << a[n - 1] << '\n';
            else
                cout << "-1" << '\n';
        }
    }

    return 0;
}