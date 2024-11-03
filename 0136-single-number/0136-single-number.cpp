class Solution {
public:
    int singleNumber(vector<int>& nums) {
      map<int,int> mp;
      for(int ele : nums){
        mp[ele]++;
      }
      int ans ;
      for(auto it : mp){
        if(it.second == 1){
            ans = it.first;
        }
      }  
      return ans;   
    }
};