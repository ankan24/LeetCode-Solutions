class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        sort(candyType.begin(),candyType.end());
        int t=1;
        for(int i=0;i<n-1;i++){
            if(candyType[i]!=candyType[i+1]) t++;
        }
        
        if(t >= n/2) return n/2;
        return t;
    }
};