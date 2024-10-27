#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int total = 0;
    int act_t = a;
    int i = 2;
    while (act_t < t + 0.5)
    {
        total += b;
        act_t = a * i;
        i++;
    }
    cout << total;
    return 0;
}