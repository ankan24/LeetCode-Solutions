class Solution {
public:  
    int solve(int n , vector<int>& dp){
        if(n==0 || n== 1){
            return 1;
        }
        if(dp[n]!=-1) return dp[n];
        int sum = 0;
        for(int i=1;i<=n;i++){
            int ls = solve(i-1 ,dp);
            int rs = solve(n-i ,dp);
            sum += ls*rs;
        }
        dp[n] = sum;
        return dp[n];
    }
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        int ans = solve(n,dp);
        return ans;
    }
};