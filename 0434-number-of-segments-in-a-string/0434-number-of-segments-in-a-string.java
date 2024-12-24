class Solution {
    public int countSegments(String s) {
        s = s.trim();
        if(s.length() == 0) return 0;
        String []words = s.split("\\s++");
        return words.length;
    }
}