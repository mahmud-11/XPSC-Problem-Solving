// week3 practice problem 1 Accepted
// A - Chess Olympiad

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, d, l;
    cin >> w >> d >> l;

    int my_point = w * 1 + d * 0.5;
    int opnt_point = l * 1 + d * 0.5;

    int remaining_game = 4 - (w + d + l);

    if (my_point + remaining_game > opnt_point)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}