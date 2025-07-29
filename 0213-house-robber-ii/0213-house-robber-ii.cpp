class Solution {
public:
    int solve(vector<int> &nums, int n, int i, vector<int> &dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];

        int inc = solve(nums,n,i+2,dp)+nums[i];
        int dec = solve(nums,n,i+1,dp);
        dp[i] = max(inc,dec);
        return dp[i];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> first,second;
        for(int i=0;i<n;i++){
            if(i!=n-1) first.push_back(nums[i]);
            if(i!=0) second.push_back(nums[i]);  
        }
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        int ans1 = solve(first,first.size(),0,dp1);
        int ans2 = solve(second,second.size(),0,dp2);
        return max(ans1,ans2);
    }
};