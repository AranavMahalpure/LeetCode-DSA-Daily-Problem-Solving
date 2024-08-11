// find no  of sub arrays where sum is lesser or equal to k question by sliding window

int countSubarraysWithSumAtMostK(const vector<int>& nums, int k) {
    int left = 0, right = 0;
    int currentSum = 0; // Sum of the current window
    int count = 0;      // Count of subarrays with sum <= k

    while (right < nums.size()) {
        // Add the current element to the sum
        currentSum += nums[right];

        // While the current sum exceeds k, shrink the window from the left
        while (currentSum > k) {
            currentSum -= nums[left];
            left++;
        }

        // All subarrays ending at 'right' and starting from 'left' to 'right' are valid
        count += (right - left + 1);

        // Move the right pointer to the next element
        right++;
    }

    return count;
}


/// recursive approach of taken and not taken 
// Helper function for recursive approach
int countSubarraysWithSumAtMostKHelper(const vector<int>& nums, int k, int index, int currentSum) {
    // Base case: If we've considered all elements
    if (index == nums.size()) {
        return 0;
    }

    int count = 0;
    int sum = currentSum;

    // Explore subarrays starting from the current index
    for (int i = index; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum <= k) {
            count++; // Increment count for this valid subarray
        } else {
            break; // If sum exceeds k, break early as further elements will also exceed k
        }
    }

    // Recursive case: move to the next index and calculate further
    // Include subarrays that start from the next index
    count += countSubarraysWithSumAtMostKHelper(nums, k, index + 1, 0);

    return count;
}

// Function to initialize recursive counting
int countSubarraysWithSumAtMostK(const vector<int>& nums, int k) {
    return countSubarraysWithSumAtMostKHelper(nums, k, 0, 0);
}