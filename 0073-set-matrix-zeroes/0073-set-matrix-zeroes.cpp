class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> zrow;
        vector<int> zcol;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                zrow.push_back(i);
                zcol.push_back(j);
            }
        }
       }
      
      for(int i=0;i<zrow.size();i++){
        for(int j=0;j<col;j++){
              matrix[zrow[i]][j] = 0;
          }
       }
    
     for(int i=0;i<row;i++){
        for(int j=0;j<zcol.size();j++){
            matrix[i][zcol[j]] = 0;
        }
     }

    }
};
