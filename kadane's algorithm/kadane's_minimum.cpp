//Maximum Score from Subarray Minimums
// Given an array arr[], with 0-based indexing, select any two indexes, i and j such that i < j. From the subarray arr[i...j], select the two minimum numbers and add them, you will get the score for that subarray. Return the maximum possible score across all the subarrays of array arr[].


int pairWithMaxSum(vector<int> &arr) {
        int max_so_far = INT_MIN;
        int max_ending_here = 0;
        for (auto num : nums) {
            max_ending_here -= num; // Inverting the sign
            max_so_far = std::max(max_so_far, max_ending_here);
            if (max_ending_here < 0) {
                max_ending_here = 0;
            }
        }
        return max_so_far;
    }