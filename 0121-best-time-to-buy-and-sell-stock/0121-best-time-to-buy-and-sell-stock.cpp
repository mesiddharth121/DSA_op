class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int max_profit= 0;
       int lowest_price = INT_MAX;
       int n = prices.size();

       for(int i = 0; i<n; i++){
        lowest_price = min(lowest_price, prices[i]);
        max_profit = max(max_profit, prices[i] - lowest_price);
       }

       return max_profit;
    }
};