class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int require = target - a;
            if(mp.find(require)!=mp.end()){
                return {mp[require], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};