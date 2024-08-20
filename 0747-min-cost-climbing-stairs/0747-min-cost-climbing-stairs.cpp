class Solution {
public:
     int minCostClimbingStairs(vector<int>& cost) {
        int prev2 = cost[0];
        int prev = cost[1];
        for (int i = 2; i < cost.size(); i++) {
            int curr = cost[i] + min(prev, prev2);
            prev2 = prev;
            prev = curr;
        }
        return min(prev, prev2);
    }
   
};