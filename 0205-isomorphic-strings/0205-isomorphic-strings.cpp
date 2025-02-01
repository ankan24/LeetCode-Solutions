class Solution {
public:
    bool isIsomorphic(string s, string t){
        vector<int> idxs(128,0);
        vector<int> idxt(128,0);
        if(s.length() != t.length()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            if(idxs[s[i]] != idxt[t[i]]){
                return false;
            }
            idxs[s[i]] = i+1;
            idxt[t[i]] = i+1;
        }
        return true;
    }
};