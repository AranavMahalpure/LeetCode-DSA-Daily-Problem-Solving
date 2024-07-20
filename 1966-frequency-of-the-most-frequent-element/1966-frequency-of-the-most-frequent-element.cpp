class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end());
    long long sum = 0;
    int maxcnt = 1;
    int left = 0;
    
    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right];
        
        while ((long long)(right - left + 1) * nums[right] - sum > k) {
            sum -= nums[left];
            ++left;
        }
        
        maxcnt = std::max(maxcnt, right - left + 1);
    }
    
    return maxcnt;
}
};