class Solution {
public:
    bool possible(vector<int> &b , int mid, int m,int k){
        int n = b.size();
        int cnt = 0;
        int noOfB = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] <= mid ){
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
    }

    int minday(vector<int>  b){
         int min = b[0];
        int n = b.size();
        for(int i=0;i<n;i++){
            if(b[i] < min){
                min = b[i];
            }
        }
        return min; 
    }
    int maxday(vector<int> b){
        int mx = b[0];
        int n = b.size();
        for(int i=0;i<n;i++){
            if(b[i] > mx){
                mx = b[i];
            }
        }
        return mx;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = minday(bloomDay);
        int r = maxday(bloomDay);
        int ans = -1;

        // if(bloomDay.size() < m*k) return -1;

        while(l <= r){
           int mid = l+(r-l)/2;
            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};