class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for(int i=0;i< n;i++){
            if(s[i]=='I'){ // 1
                if(i+1 < n && s[i+1] == 'V' || s[i+1]=='X'){
                    ans -= 1;
                }else{
                    ans += 1;
                }
            }if(s[i]=='V'){ // 5
                ans += 5;
            }if(s[i]=='X'){ // 10
                 if(i+1 < n && s[i+1]=='L' || s[i+1]=='C'){
                    ans -= 10;
                 }else{
                    ans += 10;
                 }
            }if(s[i]=='L'){ // 50
                ans += 50;
            }if(s[i]=='C'){ //100
                if(i+1 < n && s[i+1]=='D' || s[i+1]=='M'){
                    ans -= 100;
                }else{
                    ans += 100;
                }
            }if(s[i]=='D'){
                ans += 500;
            }if(s[i]=='M'){
                ans += 1000;
            }
        }
        return ans;
    }
};