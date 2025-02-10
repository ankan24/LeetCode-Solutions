class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      int n = nums.size();
      long long maxsum = 0;
      unordered_map<int,int> freq;


       long long windowsum=0;
       for(int i=0;i<n;i++){
        // Include right element
        freq[nums[i]]++;
        windowsum += nums[i];

        // Exclude left element
        if(i>=k){
            windowsum -= nums[i-k];
            freq[nums[i-k]]--;
            if(freq[nums[i-k]]==0){
                freq.erase(nums[i-k]);
            }
        }

        // Maximum maxsum
        if(i >=k-1 && freq.size()==k){
            maxsum = max(maxsum,windowsum);
        }
       }
       return maxsum;
    }
};