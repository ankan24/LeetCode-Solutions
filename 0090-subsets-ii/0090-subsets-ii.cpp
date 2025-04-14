class Solution {
public:
    void subsets(vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds , int idx){
        if(idx==nums.size()){
           if(find(ans.begin(),ans.end(), ds) == ans.end()){
              ans.push_back(ds);
           }
           return;
        }
        subsets(nums,ans,ds,idx+1);
        ds.push_back(nums[idx]);
        subsets(nums,ans,ds,idx+1);
        ds.pop_back();
    }
 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        subsets(nums , ans , ds, 0);
        return ans;
    }
};