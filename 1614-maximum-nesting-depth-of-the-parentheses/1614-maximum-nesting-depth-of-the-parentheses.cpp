class Solution {
public:
    int maxDepth(string s) {
        int c = 0;
        int ans = 0;
        for(int i=s.length();i>=0;i--){
            if(s[i]==')'){
                c++;
            }
            if(ans < c){
                ans = c;
            }
            if(s[i]=='('){
                c--;
            }
        }
        return ans;
    }
};