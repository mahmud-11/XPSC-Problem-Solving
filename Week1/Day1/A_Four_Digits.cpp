#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int s = n.size();
    if (s < 4)
        for (int i = 0; i < 4 - s; i++)
        {
            cout << "0";
        }
    cout << n;
    return 0;
}