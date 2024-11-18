class Solution {
public:
    string removeOuterParentheses(string s) {
        int bk = 0;
        string ans= "";

        for(char c : s){
            if(c == '('){
                if(bk > 0){
                    ans += '(';
                }
                bk++;
            }
            if(c == ')'){
                bk--;
                if(bk > 0){
                    ans += ')';
                }
            }
        }
        return ans;
    }
};