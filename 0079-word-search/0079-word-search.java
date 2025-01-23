class Solution {
    public boolean find(int i,int j,int index,char[][] b,String w){
        if(index == w.length()){
            return true;
        }
        if(i<0 || j<0 || i>=b.length || j>=b[0].length || b[i][j]!=w.charAt(index)){
            return false;
        }
        char temp = b[i][j];
        b[i][j] = '$';

        boolean ans = find(i+1,j,index+1,b,w) || find(i,j+1,index+1,b,w) ||
                      find(i-1,j,index+1,b,w) || find(i,j-1,index+1,b,w);

        b[i][j] = temp;
       return ans;
    }

    public boolean exist(char[][] board, String word) {
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                if(board[i][j] == word.charAt(0)){
                    if(find(i,j,0,board,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
}