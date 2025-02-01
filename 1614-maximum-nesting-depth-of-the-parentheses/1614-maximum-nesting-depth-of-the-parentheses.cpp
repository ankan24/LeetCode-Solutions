class Solution {
public:
    int maxDepth(string s) {
        int c = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                c++;
            }
            if(ans < c){
                ans = c;
            }
            if(s[i]==')'){
                c--;
            }
        }
        return ans;
    }
};