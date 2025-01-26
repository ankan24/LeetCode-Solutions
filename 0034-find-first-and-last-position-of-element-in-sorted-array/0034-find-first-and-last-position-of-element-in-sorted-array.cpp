class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r =  nums.size()-1;
        int st = -1;
        int end = -1;
//  for search first occ -
        while(l <= r){
            int m = l+(r-l)/2;
           if(nums[m]==target){
               st = m;
               r = m-1;
           }else if(nums[m] < target){
               l = m+1;
           }else{
               r = m-1;
           }
        }
// reset value -
        l = 0; 
        r = nums.size() - 1;
// for search last occ - 
        while(l <= r){
        int m = l+(r-l)/2;
           if(nums[m]==target){
               end = m;
               l = m+1;
           }else if(nums[m] < target){
               l = m+1;
           }else{
               r = m-1;
           }
        }
        return {st,end};
    }
};