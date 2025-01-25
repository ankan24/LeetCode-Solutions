class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pidx = 0 , nidx = 1;
        for(int ele : nums){
            if(ele >= 0){
                ans[pidx] = ele;
                pidx += 2;
            }
            if(ele < 0){
                ans[nidx] = ele;
                nidx += 2;
            }
        }
        return ans;
    }
};