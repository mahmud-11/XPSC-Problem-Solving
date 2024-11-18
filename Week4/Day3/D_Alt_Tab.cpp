// week3 practice problem 4 Accepted
// D - Alt-Tab

#include <bits/stdc++.h>
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    stack<string> st;
    queue<string> ans;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    while (!st.empty())
    {
        string s = st.top();
        st.pop();
        mp[s]++;
        if (mp[s] < 2)
            ans.push(s);
    }

    while (!ans.empty())
    {
        string s = ans.front();
        ans.pop();
        int sz = s.size();
        cout << s[sz - 2] << s[sz - 1];
    }

    return 0;
}