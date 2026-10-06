class Solution {
public:
    int solve_tabu(vector<int>& coins, int amount,vector<int>&dp) {
        if(amount == 0) {
            return 0;
        }
        if(amount < 0) {
            return INT_MAX;
        }
        if(dp[amount] != -1) {
            return dp[amount];
        }
        int minimum = INT_MAX;
        for(int i=0;i<coins.size();i++) {
            int ans = solve_tabu(coins,amount - coins[i],dp);
            if(ans != INT_MAX) {
                minimum = min(minimum,ans+1);
            }
        }
        dp[amount] = minimum;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1, -1);
        int ans = solve_tabu(coins,amount,dp);
        if(ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
};