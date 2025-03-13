class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<int> ans;
        for(auto ele : mp){
            if(ele.second > n/3) ans.push_back(ele.first);
        }
        return ans;
    }
};