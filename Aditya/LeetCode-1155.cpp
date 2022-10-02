class Solution {
public:
    const int M = 1e9 + 7;
    int numRollsToTarget(int n, int k, int target) {
        vector<int> dp(target + 1, 0);
        dp[0] = 1; // base case

        for(int i = 1; i <= n; i++) {
            // for every dice, do the following
            vector<int> dp1(target+1, 0);
            for(int j = 1; j <= k; j++) {
                // for every face of a dice
                for(int k = j; k <= target; k++) {
                    dp1[k] = (dp1[k] + dp[k-j]) % M;
                }
            }
            dp = dp1;
        }

        return dp[target];
    }
};
