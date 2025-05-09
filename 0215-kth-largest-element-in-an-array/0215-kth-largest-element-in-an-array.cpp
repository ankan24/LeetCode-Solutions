class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        int ans = 0;
        sort(arr.begin(), arr.end(), greater<int>());
        int i = 0;
        while (k--) {
            ans = arr[i];
            i++;
        }
        return ans;
    }
};