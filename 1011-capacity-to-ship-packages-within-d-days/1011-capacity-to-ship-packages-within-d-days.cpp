class Solution {
public:
    int findday(vector<int> &w,int cap){
        int day = 1; 
        int load = 0;
        for(int i=0;i<w.size();i++){
            if(w[i]+load > cap){
                day++;
                load = w[i];
            }else{
                load +=w[i];
            }
        }
      return day;
    }
    int sumallele(vector<int> w){
        int n = w.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += w[i];
        }
        return sum;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int l = *max_element(w.begin(),w.end());
        int r = sumallele(w);
        int ans = -1;
        while(l <= r){
            int m = l+(r-l)/2;
            int noofdays = findday(w,m);
            if(noofdays <= days){
                  ans = m;
                  r = m-1;
            }else{
                l = m+1;
            }
        }
       return ans;
    }
};