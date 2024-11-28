// week4 topicwise problem 11 Accepted
// Longest Sub-Array with Sum K

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& a, int k) {
        
        int n = a.size();
        vector<long long> pre_sum(n+1, 0);
        map<long long, int> mp;
        
        for(int i=1; i<=n; i++)
        {
            pre_sum[i] =pre_sum[i-1]+a[i-1];
            mp[pre_sum[i]]=i;
        }
        
        int ans = 0;
        int curr_len=0;
        int r = 0;
        while (r < n)
        {
            long long target = pre_sum[r]+k;
            auto it = mp.find(target);
            if(it!=mp.end())
            {
                int j = it->second;
                curr_len = j-r;
                ans=max(ans, curr_len);
            }
            r++;
        }
        
        return ans;
    }
};
