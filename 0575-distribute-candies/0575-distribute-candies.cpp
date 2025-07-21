class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size()/2;

        map<int,int> mp;
        for(int i=0;i<candyType.size();i++){
            mp[candyType[i]]++;
        }
        int c = 0;
        for(auto ele : mp){
            c++;
        }

        if(c >= n) return n;
        else return c;
    }
};