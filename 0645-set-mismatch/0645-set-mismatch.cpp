class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
            vector<int> ans(2,0);
        map<int,int> mp;
        for(int ele : nums){
            mp[ele]++;
        }

        for(int i=1;i<=nums.size();i++){
            if(mp[i]==2) ans[0] = i;
            if(mp[i]==0) ans[1] = i;
        }
        return ans;
    }
};