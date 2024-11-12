class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        int mx = 20;
        ;
        for(int i=0;i<mx;i++){
            int v = pow(3,i);
            if(v==n){
                return true;
            }
        }
        return false;
    }
};