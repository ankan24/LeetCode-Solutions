class Solution {
    public int lengthOfLastWord(String s) {
        
        String str = s.trim();
        int len = str.length();
        
        int count = 0;
        for(int i=len-1 ; i>=0 ; i--){
            if(str.charAt(i) != ' '){
                count++;
            }
            else{
                break;
            }
        }
     return count;   
    }
}