class Solution {
public:
    int solve(vector<int> &num, int n, int i, vector<int> &dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int inc = solve(num,n,i+2,dp) + num[i];
        int dec = solve(num,n,i+1,dp) + 0;
        dp[i]=max(inc,dec);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        int ans = solve(nums,n,0,dp);
        return ans;
    }
};