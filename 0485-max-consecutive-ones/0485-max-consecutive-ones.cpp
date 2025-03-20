class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) c++;
            mx = max(mx,c);
            if(nums[i]==0) c = 0;
        }
        return mx;
    }
};