class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int c = 0;
        string ans;
        
        while(i>=0 || j>=0 || c){
            if(i >= 0){
                c += a[i]-'0';
                i--;
            }
            if(j >= 0){
                c += b[j]-'0';
                j--;
            }
            ans += (c%2+'0');
            c = c/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};