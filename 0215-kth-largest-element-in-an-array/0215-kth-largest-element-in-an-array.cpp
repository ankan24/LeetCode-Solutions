class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(i==k){
                ans = nums[i-1];
                break;
            }
        }
        return ans;
    }
};