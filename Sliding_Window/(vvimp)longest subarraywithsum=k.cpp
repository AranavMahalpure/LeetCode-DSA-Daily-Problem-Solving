// To find the longest subarray with a sum less than or equal to k, we can use a sliding window approach.
//  We'll maintain a window defined by two pointers, left and right, which initially point to the start of the array. 
//  We expand the window by moving the right pointer and contract it by moving the left pointer to maintain the sum condition.



int longestSubarrayWithSumAtMostK(const vector<int>& nums, int k) {
    int left = 0, right = 0;
    int currentSum = 0; // Sum of the current window
    int maxLength = 0;  // Maximum length of subarray with sum <= k

    while (right < nums.size()) {
        // Expand the window by including nums[right]
        currentSum += nums[right];

        // Contract the window from the left if the sum exceeds k
        while (currentSum > k) {
            currentSum -= nums[left];
            left++;
        }

        // Update the maximum length if current window sum is within the limit
        maxLength = max(maxLength, right - left + 1);

        // Move the right pointer to expand the window
        right++;
    }

    return maxLength;



}
// recursion taken not taken approach 

int longestSubarrayWithSumAtMostKHelper(const vector<int>& nums, int k, int index, int currentSum) {
    // Base case: If we've considered all elements
    if (index == nums.size()) {
        return 0;
    }

    // If including this element does not exceed k, take this element
    int take = 0;
    if (currentSum + nums[index] <= k) {
        take = 1 + longestSubarrayWithSumAtMostKHelper(nums, k, index + 1, currentSum + nums[index]);
    }

    // Not take this element
    int notTake = longestSubarrayWithSumAtMostKHelper(nums, k, index + 1, currentSum);

    // Return the maximum of taking or not taking this element
    return max(take, notTake);
}

int longestSubarrayWithSumAtMostK(const vector<int>& nums, int k) {
    return longestSubarrayWithSumAtMostKHelper(nums, k, 0, 0);
}
