class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1 , zc=0;;
        int n = nums.size();
        for(int i=0;i<n;i++){
           if(nums[i]!=0)
            mul *= nums[i];
            else
            zc++;
        }
        for(int i=0;i<n;i++){
            if(zc>1)
             nums[i] = 0; 
           else if(zc==1)
            nums[i]=(nums[i] == 0)?mul:0;
           else
              nums[i] = mul/nums[i];
        }
        return nums;
    }
};