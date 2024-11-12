class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;

        for(auto ele : nums1){
            s1.insert(ele);
        }

        for(auto ele : nums2){
            if(s1.find(ele) != s1.end()){
                s2.insert(ele);
            }
        }
        vector<int> ans(s2.begin(),s2.end());
        return ans;
    }
};