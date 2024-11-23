// week4 practice problem 1 Accepted
// A - RCB vs CSK

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rcb_score, csk_score;
    cin >> rcb_score >> csk_score;
    if (rcb_score - csk_score >= 18)
        cout << "RCB\n";
    else
        cout << "CSK\n";
    return 0;
}