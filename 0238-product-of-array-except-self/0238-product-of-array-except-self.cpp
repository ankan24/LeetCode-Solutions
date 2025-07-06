class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<int> ans2(n,0);
        int prod = 1; 
        int zc = 0;
        for(int i=0;i<n;i++){
           prod *= nums[i];
           if(nums[i]==0)
           zc++;
        }
        if(zc == n) return nums;
        if(zc > 1) return ans2;
        int zprod = 1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
               zprod *= nums[i];
        }

          for(int i=0;i<n;i++){
           if(nums[i]!=0)
           ans.push_back(prod/nums[i]);
           else {
            if(nums[i]==0) ans.push_back(zprod);
            else ans.push_back(0);
           }
          }

        return ans;
    }
};