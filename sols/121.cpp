class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int maxSell = 0;
        int size = prices.size();
        
        while (r < size) {
            if (prices[l] < prices[r]) {
                maxSell = max(maxSell,prices[r] - prices[l]);
                r++;
            } else {
                l = r;
                r++;
            }
        }
        return maxSell;
    }
};  
