// week9 topicwise problem 7 Accepted
// B. Relatively Prime Pairs

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    cout << yes;
    for (int i = 0; i < ((r - l + 1) / 2); i++)
    {
        cout << l + i * 2 << " " << l + i * 2 + 1 << '\n';
    }

    return 0;
}