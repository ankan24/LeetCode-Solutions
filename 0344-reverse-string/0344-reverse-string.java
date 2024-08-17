class Solution {
    public void reverseString(char[] s) {
        int len = s.length;
        int start = 0;
        int end = len - 1;
        while(start < end){
            char temp = s[end];
            s[end] = s[start];
            s[start] = temp;

            start++;
            end--;
        }
    }
}