class Solution {
public int findPath(int i,int j, int[][] g , int zc){
    // Invalid Conditions - 
    if(i<0 || j<0 || i >= g.length || j >= g[0].length || g[i][j] == -1){
        return 0;
    }

    // Goal -
    if(g[i][j]==2){
       return (zc==0) ? 1 : 0;
    }
   
    int temp = g[i][j];
    g[i][j] = -1;
    int nzc = (temp==0) ? zc-1 : zc;

    int ans=findPath(i+1,j,g,nzc)+findPath(i-1,j,g,nzc)+findPath(i,j+1,g,nzc)+findPath(i,j-1,g,nzc);

    g[i][j] = temp;
    return ans;
}
  
public int uniquePathsIII(int[][] grid) {
          int zc = 0;
          for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==0){  
                    zc++;
                }
            }
          }
         int  ans = 0;
         for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==1){
                    ans += findPath(i,j,grid,zc);
                }
            }
          }

       return ans;
    }
}