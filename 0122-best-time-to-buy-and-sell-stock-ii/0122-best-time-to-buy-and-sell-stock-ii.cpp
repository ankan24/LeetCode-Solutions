class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int ans = 0;
        int st = prices[0];
        for(int i=1;i<prices.size();i++){
            if(st < prices[i]){
                ans += prices[i]-st;
            }
            st = prices[i];
        }
        return ans;
    }
};