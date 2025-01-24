class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ans;
        int c = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
            }else if(nums[i]==0){
                ans.push_back(c);
                c = 0;
            }
             ans.push_back(c);
        }
        int mxc = 0;
        for(int i=0;i<ans.size();i++){
            if(ans[i] > mxc){
                mxc = ans[i];
            }
        }
        return mxc;
    }
};