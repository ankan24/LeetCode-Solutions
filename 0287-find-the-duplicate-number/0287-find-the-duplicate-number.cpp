class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(auto ele : nums){
            mp[ele]++;
        }
       int ans = 0;
        for(auto it : mp){
            if(it.second > 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};