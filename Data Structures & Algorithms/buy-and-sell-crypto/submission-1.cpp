class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size() < 2 ) return 0;
        
        int maxProfit = 0, minPrice = prices[0], profit = 0;
        for(int i = 1; i < prices.size(); ++i){
            profit = prices[i] - minPrice;
            if(prices[i] < minPrice) minPrice = prices[i];
            
            if(profit > maxProfit) maxProfit = profit;
        }
        return maxProfit;
    }
};
