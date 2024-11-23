class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n = arr.size();
        int min = -1;
        int max = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                min = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                max = i;
                break;
            }
        }
        return {min,max};
        
    }
};