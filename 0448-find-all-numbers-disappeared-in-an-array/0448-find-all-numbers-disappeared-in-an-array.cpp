class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<int> freq(n+1,0);

        for(int n : nums){
            freq[n]++;
        }

        for(int i=1;i<=n;i++){
            if(!freq[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};