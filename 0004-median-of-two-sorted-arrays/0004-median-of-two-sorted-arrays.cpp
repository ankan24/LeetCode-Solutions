class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
       nums1.insert(nums1.end(), nums2.begin(), nums2.end());

       std::sort(nums1.begin(), nums1.end());

       int size = nums1.size();

       if(size % 2 == 0) return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
 
       else return (nums1[size / 2]);
    }
};