// // Longest Subarray with At Most k Distinct Integers

// Problem Statement
// Given an array of integers nums and an integer k, find the length of the longest contiguous subarray that contains at most k distinct integers.

// Example
// Input: nums = [1, 2, 1, 2, 3], k = 2
// Output: 4 (The longest subarray with at most 2 distinct integers is [1, 2, 1, 2])


#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// sliding window for Longest Subarray having K distinct Integer 
int longestSubarrayWithKDistinctIntegers(const vector<int>& nums, int k) {
    unordered_map<int, int> numCount; // Map to count occurrences of each number
    int left = 0, right = 0, maxLength = 0;

    // Slide the right end of the window across the array
    while (right < nums.size()) {
        numCount[nums[right]]++;
        right++;

        // Shrink the window from the left if there are more than k distinct integers
        while (numCount.size() > k) {
            numCount[nums[left]]--;
            if (numCount[nums[left]] == 0) {
                numCount.erase(nums[left]);
            }
            left++;
        }

        // Update the maximum length of a valid window
        maxLength = max(maxLength, right - left);
    }

    return maxLength;
}

// longestsubarrayqithmaxofsizeK;
int longsubarraywithmaxofsizek(int k, vector<int> v) {
    int left = 0;
    int max_len = INT_MIN; // Corrected the variable name
    int sum = 0;
    
    for (int right = 0; right < v.size(); right++) {
        sum += v[right];
        
        // Check if the current sum equals k
        while (sum == k) {
            max_len = max(max_len, right - left + 1);
            
            // Move the left pointer to try and find other possible subarrays
            sum -= v[left];
            left++;
        }
    }
    
    return max_len == INT_MIN ? 0 : max_len; // Handle the case when no valid subarray is found
}

int main() {
    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;
    int result = longestSubarrayWithKDistinctIntegers(nums, k);
    cout << "The length of the longest subarray with at most " << k << " distinct integers is: " << result << endl;
    return 0;
}


/// by recursion appproach taken and not taken 
int longestSubarrayWithSumAtMostKHelper(const vector<int>& nums, int k, int index, int currentSum, int currentLength) {
    // Base case: If we've considered all elements
    if (index == nums.size()) {
        return currentLength;
    }
    // Option 1: Not take the current element
    int notTake = longestSubarrayWithSumAtMostKHelper(nums, k, index + 1, currentSum, currentLength);

    // Option 2: Take the current element, if adding it doesn't exceed k
    int take = 0;
    if (currentSum + nums[index] <= k) {
        take = longestSubarrayWithSumAtMostKHelper(nums, k, index + 1, currentSum + nums[index], currentLength + 1);
    }

    // Return the maximum length of the two options
    return max(notTake, take);
}

int longestSubarrayWithSumAtMostK(const vector<int>& nums, int k) {
    return longestSubarrayWithSumAtMostKHelper(nums, k, 0, 0, 0);
}
