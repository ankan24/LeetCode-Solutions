class Solution {
    public boolean findWord(int i, int j, int index , char[][] b , String w){
         // Goal -
         if(index == w.length()){
            return true;
         }
         // Invalid Conditions - 
         if(i<0 || j<0 || i>= b.length || j>=b[0].length || b[i][j]!= w.charAt(index) || b[i][j] =='$'){
            return false;
         }

        char temp = b[i][j];
        b[i][j] = '$';
         // Explore all paths -
        boolean ans = findWord(i+1,j,index+1,b,w) ||
         findWord(i-1,j,index+1,b,w) ||
         findWord(i,j+1,index+1,b,w) ||
         findWord(i,j-1,index+1,b,w);
         b[i][j] = temp;
        return ans;

    }

    public boolean exist(char[][] board, String word) {
        for(int i=0 ; i< board.length ; i++){
            for(int j=0; j<board[0].length;j++){
             if(board[i][j] == word.charAt(0) &&  findWord(i,j,0,board,word)){
               return true;
              }
            }
        }
        return false;
    }
}