class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest = 1 , count = 0 , lastsmall = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == lastsmall){
                count++;
                lastsmall = nums[i];
            }else if(nums[i] != lastsmall){
                count = 1;
                lastsmall = nums[i];
            }
            longest = max(longest,count);
        }
        return longest;
    }
};