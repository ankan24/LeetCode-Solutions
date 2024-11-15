class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> us(allowed.begin() , allowed.end());
        int c = 0;
        for(const string word : words){
            bool isExist = true;
            for(char c : word){
                if(us.find(c)==us.end()){
                    isExist = false;
                    break;
                }
            }
            if(isExist) c++;
        }
        return c;
    }
};