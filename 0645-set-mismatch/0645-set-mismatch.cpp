class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2,0);
        map<int,int> mp;
        for(int ele : nums){
            mp[ele]++;
        }

        for(int i=0;i<n;i++){
            if(mp[i]==2) ans[0] = i;
            if(mp[i]==0) ans[1] = i;
        }
        if(ans[0]==0) ans[0] = nums[n-2];
        if(ans[1]==0) ans[1] = n;
        return ans;
    }
};