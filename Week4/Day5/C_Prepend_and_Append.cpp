// week3 topicwise problem 1 Accepted
// C. Prepend and Append

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
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
        string s;
        cin >> s;

        int ans = n;
        int i = 0, j = n - 1;
        while (i < j && s[i] != s[j])
        {
            // if (s[i] != s[j])
            ans -= 2;
            // else
            //     break;

            i++;
            j--;
        }
        cout << ans << '\n';
    }

    return 0;
}