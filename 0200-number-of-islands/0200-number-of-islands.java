class Solution {
    public void solve(int i,int j,int r,int c,char[][] grid,int[][] visit){
        if(i>=r || j>=c) return;
        if(grid[i][j]==0) return;
        visit[i][j]=1;
        
        int nr=0,nc=0;
        //right
        nr=i;
        nc=j+1;
        if(nr<r && nc<c && grid[nr][nc]=='1' && visit[nr][nc]==0) solve(nr,nc,r,c,grid,visit);
        //left
        nr=i;
        nc=j-1;
         if(nr<r && nc>=0 && grid[nr][nc]=='1' && visit[nr][nc]==0) solve(nr,nc,r,c,grid,visit);
        //up
        nr=i-1;
        nc=j;
         if(nr>=0 && nc<c && grid[nr][nc]=='1' && visit[nr][nc]==0) solve(nr,nc,r,c,grid,visit);
        //down
        nr=i+1;
        nc=j;
         if(nr<r && nc<c && grid[nr][nc]=='1' && visit[nr][nc]==0) solve(nr,nc,r,c,grid,visit);
        //diagonal
       
    }
    public int numIslands(char[][] grid) {
        int r=grid.length;
        int c=grid[0].length;
        int [][]visit= new int[r][c];
        int count=0;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1' && visit[i][j]==0){
                    visit[i][j]=1;
                    count++;
                    solve(i,j,r,c,grid,visit);
                }
            }
        }
        return count;
    }
}