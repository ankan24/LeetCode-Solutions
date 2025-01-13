class Solution {
    public int reverse(int x) {
        String n = ""+x;
        String rev = "";
        if(x>0){
            rev = new StringBuilder(n).reverse().toString();
        }else if(x<0){
            rev = "-"+new StringBuilder(n.substring(1)).reverse().toString();
        }else{
            return 0;
        }
         try {
            return Integer.parseInt(rev);
        }catch (NumberFormatException e) {
            return 0;
        }
    }
}