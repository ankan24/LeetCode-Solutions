class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc = 0;
        for(int i=0;i<nums.size();){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                zc++;
            }else{
                i++;
            }
        }
        for(int i=0;i<zc;i++){
            nums.push_back(0);
        }
    }
};