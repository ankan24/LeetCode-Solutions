class Solution {
public:
    int solve(vector<vector<int>> &og , int m , int n , int i, int j ,vector<vector<int>> &dp){
        if(i==m-1 && j==n-1) return 1;
        
        if(i<0 || j<0 || i>=m || j>=n || og[i][j]==1) return 0;

       // int t = og[i][j];
        //og[i][j] = 1;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = solve(og,m,n,i+1,j,dp)+solve(og,m,n,i,j+1,dp);
       // og[i][j] = t;
        return dp[i][j];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1 || obstacleGrid[0][0]==1) return 0;
        if(n==1 && m==1) return 1;

        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(obstacleGrid ,m,n,0,0,dp);
    }
};