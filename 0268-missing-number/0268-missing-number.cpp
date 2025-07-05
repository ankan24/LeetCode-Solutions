class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int arrsum=0 , elesum=0;
        for(int i=0;i<n;i++){
            arrsum += nums[i];
        }
        for(int i=0;i<=n;i++){
            elesum += i;
        }
        return elesum-arrsum;
    }
};