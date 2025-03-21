class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
         int o=0,e=0;
         for(int i=0;i<position.size();i++){
             if(position[i]%2==0) e++;
             else o++;
         }
      int ans = min(o,e);
       return ans;
    }
};