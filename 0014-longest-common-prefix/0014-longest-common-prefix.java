class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder ans = new StringBuilder();
        Arrays.sort(strs);
        int n = strs.length;
        char []first = strs[0].toCharArray();
        char []last = strs[n-1].toCharArray();

        for(int i = 0 ; i< first.length ; i++){
            if(first[i] != last[i]){
                break;
            }else{
                ans.append(first[i]);
            }
        }
        return ans.toString();
    }
}