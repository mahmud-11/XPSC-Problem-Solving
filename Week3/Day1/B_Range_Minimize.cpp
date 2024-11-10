// week3 practice problem 2
// B - Range Minimize

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
        multiset<ll> ms;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ms.insert(a);
        }

        auto it1 = ms.begin();
        it1++;
        it1++;
        ll ans1 = *--ms.end() - *it1;

        auto it2 = --ms.end();
        it2--;
        it2--;
        ll ans2 = *it2 - *ms.begin();

        auto it3 = ms.begin();
        it3++;
        auto it4 = --ms.end();
        it4--;
        ll ans3 = *it4 - *it3;

        ll fl_ans = min({ans1, ans2, ans3});

        cout << fl_ans << '\n';
    }

    return 0;
}