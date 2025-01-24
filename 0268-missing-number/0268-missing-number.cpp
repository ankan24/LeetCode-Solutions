class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mx = nums[n-1];
        int i;
        for(i=0;i<mx;i++){
            if(nums[i]!=i) return i;
        }
        return i+1;
    }
};