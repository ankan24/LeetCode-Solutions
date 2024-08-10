class Solution {
    public int maxProfit(int[] prices){
        int len = prices.length; 
        int maxProfit = 0;
        int minPrice = prices[0];


        // for (int i = 0; i < len; i++) {
        //     for (int j = i + 1; j < len; j++) {
        //         int profit = prices[j] - prices[i];  
        //         if (profit > maxProfit) {
        //             maxProfit = profit;
        //         }
        //     }
        // }
        // return maxProfit; 


        for(int i=0;i<len;i++){

            if(minPrice > prices[i]){
                minPrice = prices[i];
            }

            int profit = prices[i] - minPrice;

            if(profit > maxProfit){
                maxProfit = profit;
            }

        }
        return maxProfit;
    }
}