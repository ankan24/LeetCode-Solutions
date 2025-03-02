class Solution {
public:
   bool  isPalindrome(string s, int st , int end){
       while(st <= end){
           if(s[st++]!=s[end--]) return false;
       }
       return true;
   }
 
   void fun(string s , int idx , vector<string>& path, vector<vector<string>>& ans){
       if(s.length()==idx){
          ans.push_back(path);
          return;
       }
       for(int i=idx;i<s.size();i++){
          if(isPalindrome(s,idx,i)){
              path.push_back(s.substr(idx , i-idx+1));
              fun(s,i+1,path,ans);
              path.pop_back();
          }
       }
   }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        fun(s,0,path,ans);
        return ans;
    }
};