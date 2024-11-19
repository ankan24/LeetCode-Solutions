class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int index = 0; 
    vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
                index++;
            }
        }
        
        for (int i = index; i < nums.size(); i++) {
            ans.push_back(0);
        }

        for(int i=0;i<nums.size();i++){
            nums[i] =ans[i];
        }
 
    }
};