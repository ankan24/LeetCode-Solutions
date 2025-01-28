class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int l = 0;
        // int r = nums.size()-1;
        // while(l <= r){

        // }

        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans ^= nums[i];
        }
        return ans;
    }
};