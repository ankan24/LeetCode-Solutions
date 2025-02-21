class Solution {
public:
    void findCombinations(string& digits,string s,int idx, vector<string> arr , vector<string>& ans){
           if(digits.length() == s.length()){
              ans.push_back(s);
              return;
           }

       int num = digits[idx]-'0';
       string letter = arr[num];
        for(int i=0;i<letter.length();i++){
            findCombinations(digits,s+letter[i],idx+1,arr,ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> arr = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string s;
        findCombinations(digits,s,0,arr,ans);
        return ans;
    }
};