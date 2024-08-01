class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for (int num : nums) {
        max_ending_here += num;
        max_so_far = std::max(max_so_far, max_ending_here);
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    return max_so_far;
    }
};