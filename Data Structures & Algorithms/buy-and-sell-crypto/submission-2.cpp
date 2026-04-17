class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size() < 2 ) return 0;

        int maxProfit = 0, minPrice = prices[0], profit = 0;
        for(int i = 1; i < prices.size(); ++i){
            
            if(prices[i] < minPrice) {
                minPrice = prices[i];
            }
            else{
                profit = prices[i] - minPrice;
                maxProfit = max(maxProfit, profit);
            }            
        }
        return maxProfit;
    }
};
