class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
    int cnt = 1;
    int maxcnt = 1;
    long long sum = 0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    int left = 0;
    
    for (int right = 0; right < n; ++right) {
        sum += nums[right];
        
        // Check if current window is valid
        while ((long long)(right - left + 1) * nums[right] - sum > k) {
            sum -= nums[left];
            ++left;
        }
        
        // Update maxcnt if the current window size is greater
        maxcnt = std::max(maxcnt, right - left + 1);
    }
    
    return maxcnt;
}
};