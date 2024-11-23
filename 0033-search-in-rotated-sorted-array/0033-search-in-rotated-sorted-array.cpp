class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans = i;
                break;
            }
        }
        return ans;
    }
};