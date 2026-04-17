class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, profit = 0;
        for(int i = 0; i < prices.size(); ++i){
            for(int j = i+1 ; j < prices.size(); ++j){
                if (prices[j] <= prices[i])
                    continue;
                profit = prices[j] - prices[i];
                if (profit > maxProfit) maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
