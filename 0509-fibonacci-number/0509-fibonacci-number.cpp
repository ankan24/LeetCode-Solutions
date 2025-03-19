class Solution {
public:
//      Memoization -------------
 vector<int> arr;

    int fib(int n) {
        if(arr.empty()) arr.resize(n+1,-1);
        
        if(n==0 || n==1) return n;
        if(arr[n] != -1) return arr[n];

        arr[n]  = fib(n-1)+fib(n-2);    
        return arr[n];
    }
};