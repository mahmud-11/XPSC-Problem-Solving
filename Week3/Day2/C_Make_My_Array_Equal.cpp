// week3 practice problem 3 Accepted
// C_Make_My_Array_Equal

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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a != 0)
                s.insert(a);
        }

        if (s.size() <= 1)
            cout << yes;
        else
            cout << no;
    }

    return 0;
}