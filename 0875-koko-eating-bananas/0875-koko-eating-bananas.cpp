class Solution {
public:
    long long totalHour(vector<int> p, int k){
        int n = p.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
           sum += p[i]/k;
           if(p[i]%k != 0){
             sum++;
           }
        }
       return sum;
    }

    int maxele(vector<int> p){
        int max = p[0];
        int n = p.size();
        for(int i=0;i<n;i++){
            if(p[i] > max){
                max = p[i];
            }
        }
        return max;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = maxele(piles);
        int k = 0;
        while(l <= r){
            int m = l+(r-l)/2;
            long long thr = totalHour(piles,m);
            if(thr <= h){
                k = m;
                r = m-1; 
            }else{
                l = m+1;
            }
        }
        return k;
    }
};