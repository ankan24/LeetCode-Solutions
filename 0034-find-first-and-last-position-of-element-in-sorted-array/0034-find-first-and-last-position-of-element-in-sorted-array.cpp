class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n = arr.size();
        int min = -1;
        int max = -1;
        for(int i=0;i<n;i++){
            if(arr[i] == x){
                if(min == -1){
                    min = i;
                }
                max = i;
            }
        }
      
        return {min,max};
        
    }
};