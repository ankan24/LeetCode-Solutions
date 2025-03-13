class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int mxfreq = 0;
        int mxele = 0;
        for(auto ele : mp){
            if(ele.second > mxfreq){
                mxfreq = ele.second;
                mxele = ele.first;
            }
        }
        return mxele;
    }
};