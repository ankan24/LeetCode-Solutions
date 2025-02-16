class Solution {
public:
    bool isSafe(int row,int col, vector<string> board , int n){
         int r1 = row , c1 = col;  // store row col point
         // we dont need to check right , right-up , right-down . cause we dont filled it yet.
         // check left-up side
         while(row >= 0 && col >= 0){
            if(board[row][col]=='Q') return false; //if Queen already exist on this side then this place is incorrect
            row--;
            col--;
         }
         // check left side
         row = r1;
         col = c1;
         while(col >= 0){
            if(board[row][col]=='Q') return false; //if Queen already exist on this side then this place is incorrect
            col--;
         }

         // check left-down side
         row = r1;
         col = c1;
         while(col >= 0 && row < n){
            if(board[row][col]=='Q') return false; //if Queen already exist on this side then this place is incorrect
            col--;
            row++;
         }
       return true;
    }

    void solve(int col ,vector<string>& board, vector<vector<string>>& ans, int n){
        if(col == n){ // if column size == the bord size then a correct posible board is created
            ans.push_back(board);  // add the board on answer
            return; 
        }    

        for(int row = 0 ; row < n ;row++){    // start from colum-0 and row-0
            if(isSafe(row,col,board,n)){   // check is the position is safe
                board[row][col] = 'Q'; // if safe fill the Queen
                solve(col+1 , board, ans, n);  // then go to the next column
                board[row][col] = '.'; // backtrack and fill it previous value
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; // store all posible positions
        vector<string> board(n); 
        string s(n , '.'); // inisilize a row of .
        for(int i=0;i<n;i++){
            board[i] = s; // inisilize full bord N*N with .
        }
        solve(0,board,ans,n); //start from colum 0. the function will find which row is correct position
        return ans;
    }
};