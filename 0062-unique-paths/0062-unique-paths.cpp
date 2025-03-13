class Solution {
public:
    int countPath(int m,int n,int i,int j,vector<vector<int>>& dp){
         // Golas -----
        if(i==m-1 && j==n-1) return 1;
        // inValid conditions -----
        if(i< 0 || j < 0 || i>=m || j>=n) return 0;
        // check down , right -----

        //use DP 
        if(dp[i][j]!=-1) return dp[i][j];
        return  dp[i][j] = countPath(m,n,i+1,j,dp) + countPath(m,n,i,j+1,dp);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m , vector<int>(n,-1));
        int ans = countPath(m,n,0,0 ,dp);
        return ans;
    }
};