// week3 topicwise problem 8 Accepted
// A. Merging Arrays

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

    vector<int> arr_n(n), arr_m(m), arr(n + m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr_n[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr_m[i];
    }

    int i = 0, j = 0, k = 0;
    while (k < m + n)
    {
        if (i == n && j < m)
        {
            arr[k] = arr_m[j];
            k++;
            j++;
        }

        else if (j == m && i < n)
        {
            arr[k] = arr_n[i];
            k++;
            i++;
        }

        else if (arr_n[i] < arr_m[j])
        {
            arr[k] = arr_n[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr_m[j];
            k++;
            j++;
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}