class Solution {
public:
    int mincost(vector<int>& c , int n , vector<int>& dp){
       if(n==0) return 0;
        if(n==1) return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==2) return dp[n] = min(c[0],c[1]);
                 
       return dp[n] = min((mincost(c,n-1,dp)+c[n-1]) , (mincost(c,n-2,dp)+c[n-2]));
    }
    int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
       vector<int> dp(n+1,-1);
       int ans = mincost(cost,n,dp);
       return ans;
    }
};