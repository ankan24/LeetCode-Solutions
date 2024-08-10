class Solution {
    public int removeElement(int[] nums, int val) {
        int len  = nums.length;
        int index = 0;
        for(int i=0;i<len;i++){
            if(nums[i]!=val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
}