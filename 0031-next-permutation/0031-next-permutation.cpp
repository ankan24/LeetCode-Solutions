class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int infpt = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                infpt = i;
                break;
            }
        }

        if(infpt==-1){ 
            reverse(nums.begin(),nums.end());
        }else{
             for (int i = n - 1; i > infpt; i--) {
                if (nums[i] > nums[infpt]) {
                    swap(nums[i], nums[infpt]);
                    break;
                }
            }
            reverse(nums.begin()+infpt+1 , nums.end());
        }

    }
};