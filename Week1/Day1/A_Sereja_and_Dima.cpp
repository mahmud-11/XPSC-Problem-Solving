#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int Sereja = 0, Dima = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] > v[j])
        {
            Sereja += v[i];
            i++;
        }
        else
        {
            Sereja += v[j];
            j--;
        }
        if (v[i] > v[j])
        {
            Dima += v[i];
            i++;
        }
        else
        {
            Dima += v[j];
            j--;
        }
    }

    if (i == j)
        Sereja += v[i];

    cout << Sereja << " " << Dima;

    return 0;
}