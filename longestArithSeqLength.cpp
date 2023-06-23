class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
      int n = nums.size();
        int maxlen = 0;
        vector<unordered_map<int, int>> dp(n);

        for (int i = 0; i < n; i++) {
            dp[i] = unordered_map<int, int>();
            for (int j = 0; j < i; j++) {
                int diff = nums[i] - nums[j];
                dp[i][diff] = dp[j].count(diff) > 0 ? dp[j][diff] + 1 : 2;
                maxlen = max(maxlen, dp[i][diff]);
            }
        }
    return maxlen;
    }
};
