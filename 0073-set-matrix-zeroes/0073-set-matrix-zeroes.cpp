class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row(m,0);   // record all rows , where 0 found make the index 1
        vector<int> col(n,0);   // record all colums , where 0 found make the index 1
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i] = 1;   // make 1 where 0 found
                    col[j] = 1;   // make 1 whare 0 found
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==1 || col[j]==1){ // where 1 found make them 0
                    matrix[i][j] = 0;
                }
            }
        }
    }
};