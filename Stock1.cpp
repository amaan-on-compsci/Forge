class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = -1, min = prices[0];

        for(int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) 
                min = prices[i];

            if (prices[i] - min > profit)
                profit = prices[i] - min;
        }
        
        if (profit < 0)
            return 0;
        return profit;
    }
};