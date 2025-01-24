class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         if(n<=1) return;
         k = k%n;
        vector<int> ans;
        for(int i=n-k; i<=n-1 ; i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            ans.push_back(nums[i]);
        }
        nums.clear();
        for(int ele : ans){
             nums.push_back(ele);
        }
    }
};