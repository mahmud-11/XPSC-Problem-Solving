//  week4 topicwise problem 10 Accepted
// Longest Substring with K Uniques

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n= s.size();
    int ans = -1;
    map<char, int> mp;
    int l = 0, r = 0;
    while (r < n)
    {
        mp[s[r]]++;
        int sz;
        sz = mp.size();

        if (sz == k)
        {
            ans = max(ans,r - l + 1);
        }
        else
        {
            while (sz > k && l <= r)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                    mp.erase(s[l]);
                l++;
                sz = mp.size();
            }

        }
        r++;
    }
    return ans;
    }
};
