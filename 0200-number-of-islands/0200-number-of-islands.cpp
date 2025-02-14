class Solution {
public:
    void findIsland(int i,int j,vector<vector<char>>& grid){
     if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0'){
        return;
     }

     grid[i][j] = '0';

     findIsland(i+1,j,grid);
     findIsland(i-1,j,grid);
     findIsland(i,j+1,grid);
     findIsland(i,j-1,grid);
     
  return;
    }
    void func(vector<vector<char>>& grid){
        for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
        }
        cout<<endl;
        cout<<endl;
    }
    int numIslands(vector<vector<char>>& grid) {
        int c = 0;
      for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]=='1'){
                 c++;
                findIsland(i,j,grid);
                // func(grid);
            }
        }
      }
        return c;
    }
};