// week3 topicwise problem 2 Accepted
// B. Number of Smaller

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

    vector<int> ans;
    int cnt = 0;
    int i = 0, j = 0;
    while (j < m)
    {
        if (i < n && arr_n[i] < arr_m[j])
        {
            i++;
            cnt++;
        }
        else
        {
            ans.push_back(cnt);
            j++;
        }
    }

    for (int a : ans)
    {
        cout << a << " ";
    }

    return 0;
}