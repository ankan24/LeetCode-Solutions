class Solution {
    public boolean check(int[] nums) {
        int n = nums.length;
        int c = 0;
        if(nums[n-1] > nums[0]) c++;
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]) c++;
        }
        if(c <= 1) return true;
        else return false;
    }
}