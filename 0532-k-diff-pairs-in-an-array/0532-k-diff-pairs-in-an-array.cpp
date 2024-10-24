class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // if k is less than 0 
        if(k < 0 ) return 0;
        
        unordered_map<int,int> mp;
        // add all elements on map for record ->  ele     count
        for(auto ele : nums){
            mp[ele]++;
        }

        int count = 0;

        // if k is 0 , then find those numbres whose frequency are greater than 1. Ex - 1-1 = 0 , and count of 1 is 2 times
        if(k==0){
        for(auto it : mp){
            if(it.second>1){
                count ++;
            }
        }
        return count;
      }
       
      // arr[i] - arr[j] = k   ==>>>   arr[i] - k = arr[j] . 
      for(auto it : mp){
        if(mp.count(it.first-k)){
            count ++;
        }
      }
      return count;
    }
};