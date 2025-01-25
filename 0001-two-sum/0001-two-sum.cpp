class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int n1 = nums[i];
            int n2 = target-n1;
            for(int j=i+1;j<n;j++){
                if(nums[j]==n2){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};