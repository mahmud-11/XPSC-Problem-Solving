#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<string, string>> st;
    for (int i = 0; i < n; i++)
    {
        string tr, cl;
        cin >> tr >> cl;
        st.insert({tr, cl});
    }

    cout << st.size() << '\n';

    return 0;
}