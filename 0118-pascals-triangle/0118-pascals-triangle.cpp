class Solution {
public:
    long long nCr(int r,int c){
        long long res = 1;
        for(int i=0;i<c;i++){
            res = res*(r-i);
            res = res/(i+1);
        }
        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int r=1;r<=numRows;r++){
            vector<int> store;
            for(int c=1;c<=r;c++){
                store.push_back(nCr(r-1,c-1));
            }
            ans.push_back(store);
        }
        return ans;
    }
};