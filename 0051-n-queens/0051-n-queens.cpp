class Solution {
public:
    bool isSafe(int row,int col, vector<string> board , int n){
         int r1 = row , c1 = col;  // store row col point
         // we dont need to check right , right-up , right-down . cause we dont filled it yet.
         // check left-up side
         while(row >= 0 && col >= 0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
         }
         // check left side
         row = r1;
         col = c1;
         while(col >= 0){
            if(board[row][col]=='Q') return false;
            col--;
         }

         // check left-down side
         row = r1;
         col = c1;
         while(col >= 0 && row < n){
            if(board[row][col]=='Q') return false;
            col--;
            row++;
         }
       return true;
    }

    void solve(int col ,vector<string>& board, vector<vector<string>>& ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }    

        for(int row = 0 ; row < n ;row++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1 , board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n , '.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};