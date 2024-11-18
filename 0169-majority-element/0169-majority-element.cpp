class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      int mxc = 0;
      int mxe = 0;
        for(auto it : mp){
            if(it.second > mxc){
                mxc = it.second;
                mxe = it.first;
            }
        }
        return mxe;
    }
};