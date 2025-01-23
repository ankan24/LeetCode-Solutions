class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int n = nums.size();
          set<int> s;
          for(int i=0;i<n;i++){
            s.insert(nums[i]);
          }
          nums.clear();
          for(auto i=s.begin() ; i!=s.end() ;i++){
              nums.push_back
              (*i);
          }
          return nums.size();
    }
};