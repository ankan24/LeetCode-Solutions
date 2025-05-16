class Solution {
public:
    void solve(vector<string>& ans, string op, int i, string mp[], string d){
           // base case 
        if(i >= d.length()){
            ans.push_back(op);
            return;
        }
        
         int num = d[i]-'0';
         string val = mp[num];

         for(int j=0;j<val.length();j++){
            op.push_back(val[j]);
            solve(ans,op,i+1,mp,d);
            op.pop_back();
         }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> ans;
        string op;
        int i = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ans,op,i,mapping,digits);
        return ans;
    }
};