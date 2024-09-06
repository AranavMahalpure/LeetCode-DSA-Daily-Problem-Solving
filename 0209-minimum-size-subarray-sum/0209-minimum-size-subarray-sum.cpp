class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n = nums.size();
    int min_len = INT_MAX;
    int sum = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        sum += nums[end];

        while (sum >= target) {
            min_len = min(min_len, end - start + 1);
            sum -= nums[start++];
        }
    }

    return (min_len == INT_MAX) ? 0 : min_len;
    }
};