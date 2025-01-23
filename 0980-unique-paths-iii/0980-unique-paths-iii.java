class Solution {
    public int path(int i,int j, int[][] g,int zc){
    if(i<0 || j<0 || i>=g.length || j>=g[0].length || g[i][j]==-1) return 0;

    if(g[i][j] == 2 && zc==0) return 1;

    int temp = g[i][j];
    g[i][j] = -1;
    int nzc = (temp==0) ? zc-1 : zc;  
    int ans = path(i+1,j,g,nzc)+ path(i-1,j,g,nzc)+ path(i,j+1,g,nzc)+ path(i,j-1,g,nzc);
    g[i][j] = temp;
    return ans;
    }

    public int uniquePathsIII(int[][] grid) {
        int zc = 0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==0) zc++;
            }
        }
         int ans = 0;
         for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==1){
                    ans += path(i,j,grid,zc);
                }
            }
        }
        return ans;
    }
}