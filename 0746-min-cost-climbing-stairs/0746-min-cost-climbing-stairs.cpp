class Solution {
public:
    int solve(vector<int> &c, int i, int n , vector<int> &dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i] = min(solve(c,i+1,n,dp),solve(c,i+2,n,dp))+c[i];
        return dp[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        int ans =min(solve(cost,1,n,dp),solve(cost , 0 , n,dp));
        return ans;
    }
};