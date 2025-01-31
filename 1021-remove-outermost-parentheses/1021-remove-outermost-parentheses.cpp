class Solution {
public:
    string removeOuterParentheses(string s) {
        int bc = 0;
        int n = s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
               if(bc > 0) ans += "(";
                bc++;
            }else{
               bc--;
               if(bc > 0) ans += ")";
            }
        }
        return ans;
    }
};