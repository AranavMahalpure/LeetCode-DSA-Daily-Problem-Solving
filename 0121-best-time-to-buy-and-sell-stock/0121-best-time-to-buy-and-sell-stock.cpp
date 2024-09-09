class Solution {
public:
      int maxProfit(vector<int>& nums) {
      int maxProfit = 0;
        int minPrice = INT_MAX;
        
        for (int price : nums) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }
        
        return maxProfit;
    }
};