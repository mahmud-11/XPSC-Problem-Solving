// week3 topicwise problem 3 Accepted
// C. Number of Equal

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> arr_n(n), arr_m(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr_n[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr_m[i];
    }

    ll ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        int curr, cnt_n = 0, cnt_m = 0;
        curr = arr_m[j];
        while (curr == arr_m[j])
        {
            j++;
            cnt_m++;
        }

        while (i < n && curr > arr_n[i])
            i++;

        while (curr == arr_n[i])
        {
            i++;
            cnt_n++;
        }

        ans += (1ll * cnt_n * cnt_m); // typecast very importent
    }

    cout << ans;

    return 0;
}