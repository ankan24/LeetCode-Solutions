class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zc++;
            }
        }
        vector<int> ans;
         for(int i=0;i<n;i++){
            if(nums[i]!=0)  ans.push_back(nums[i]);
        }
        for(int i=0;i<zc;i++){
            ans.push_back(0);
        }
       nums.clear();
       for(int ele : ans){
        nums.push_back(ele);
       }
    }
};