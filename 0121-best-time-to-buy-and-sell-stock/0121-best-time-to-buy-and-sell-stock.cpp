class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        int n = prices.size();
        
        for(int i=0;i<n;i++){
            if(prices[i] < minprice){
                minprice = prices[i];
            }
            int profit = prices[i] - minprice;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
        return maxprofit;
    }
};