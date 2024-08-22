class Solution {
    public int findComplement(int num) {
        String bS = Integer.toBinaryString(num);
        StringBuilder ansSt = new StringBuilder();
        int len = bS.length();

        for(int i=0;i<len;i++){
            if(bS.charAt(i)=='1'){
                ansSt.append('0');
            }else{
                ansSt.append('1');
            }
        }
        int ans = Integer.parseInt(ansSt.toString(),2);
        return ans;
    }
}