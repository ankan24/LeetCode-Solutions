class Solution {
public:
    void setZeroes(vector<vector<int>>& mtx) {
        int n = mtx.size(); // no of row
        int m = mtx[0].size(); // no of col

        vector<int> r(n,0);
        vector<int> c(m,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mtx[i][j]==0){ 
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i]==1 || c[j]==1){
                    mtx[i][j]=0;
                }
            }
        }
    }
};