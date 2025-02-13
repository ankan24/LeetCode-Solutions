class Solution {
public:
      bool isValid(vector<vector<char>>& board, int r, int c, char ele) {
        for (int i = 0; i < 9; i++) {
            if (board[i][c] == ele) return false; // Check column
            if (board[r][i] == ele) return false; // Check row
            if (board[3*(r/3)+i/3][3*(c/3)+i%3] == ele) return false; // Check 3x3 sub-box
        }
        return true;
    }

    // Backtracking function to solve Sudoku
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') { // Empty cell
                    for (char ele = '1'; ele <= '9'; ele++) { // Use '1' to '9'
                        if (isValid(board, i, j, ele)) {
                            board[i][j] = ele; // Place the number

                            if (solve(board)) return true; // If successful, return true
                            board[i][j] = '.'; // Backtrack if not solvable
                        }
                    }
                    return false; // No valid number found
                }
            }
        }
        return true; // Sudoku solved
    }
    // Main function to solve Sudoku
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};