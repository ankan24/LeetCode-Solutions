class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int num = 1;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i] == num && nums[i] >0){
                num++;
            }
        }
        return num;
    }
};