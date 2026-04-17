class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size() < 2 ) return 0;

        int maxProfit = 0, l = 0, r = 1, profit = 0;
        while (r < prices.size()){
            if(prices[l] < prices[r]){
                profit = prices[r] - prices[l];
                maxProfit = max(maxProfit, profit);
            }
            else{
                l = r;
            }
            r++;
        }        
        return maxProfit;
    }
};
