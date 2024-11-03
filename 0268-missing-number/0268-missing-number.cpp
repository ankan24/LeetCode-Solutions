class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int num1 = 0 , num2 = 0;
        for(int i=0;i<n;i++){
            num1 += nums[i];
        }
        for(int j=0;j<n+1;j++){
            num2+=j;
        }
        return num2-num1;
        
    }
};