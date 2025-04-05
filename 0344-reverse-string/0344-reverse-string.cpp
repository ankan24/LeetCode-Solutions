class Solution {
public:
   void solve(vector<char>& s , vector<char>& rev ,int n){
        if(n==0) return;
        rev.push_back(s[n-1]);
        solve(s,rev,n-1);
   }
  
    void reverseString(vector<char>& s) {
        vector<char> rev;
        int n = s.size();
        solve(s,rev,n);

        for(int i=0;i<s.size();i++){
            s[i] = rev[i];
        }
    }
};