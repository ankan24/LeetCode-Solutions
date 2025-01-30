class Solution {
public:
    int divisor(vector<int> n,int m){
        int sum = 0;
        for(int i=0;i<n.size();i++){
            sum += n[i]/m;
            if(n[i]%m != 0){
                sum++;
            }
        }
        return sum; 
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(nums.begin(),nums.end());
        int ans = -1;
        while(l <= r){
            int mid = l+(r-l)/2;
            int div = divisor(nums,mid);
            if(div <= threshold){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};