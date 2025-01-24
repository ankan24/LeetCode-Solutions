class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0) nums[idx++] = nums[i];
        }
        while(n > idx){
            nums[idx++] = 0;
        }
    }
};