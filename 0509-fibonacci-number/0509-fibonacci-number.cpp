class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        int prev1 = 1;
        int prev2 = 0;
        int curr = 0;
        for(int i=2;i<=n;i++){
             curr = prev1+prev2;
             prev2 = prev1;
             prev1 = curr;
             curr++;
        }
        return prev1;
    }
};