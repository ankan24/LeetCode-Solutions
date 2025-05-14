class Solution {
public:
   bool isPresent(vector<vector<char>> &board,string word,int indx , int i,int j){
       if(indx == word.size()){
         return true;
       }
       
       if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[indx]){
           return false;
       }
     
       char temp = board[i][j];
       board[i][j] = '#';

    bool ans = isPresent(board,word,indx+1,i+1,j) || isPresent(board,word,indx+1,i-1,j)
         || isPresent(board,word,indx+1,i,j+1) || isPresent(board,word,indx+1,i,j-1);
       board[i][j] = temp;
    return ans;
   }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                   if(isPresent(board,word,0,i,j)){
                      return true;
                   }
                }
            }
        }
        return false;
    }
};