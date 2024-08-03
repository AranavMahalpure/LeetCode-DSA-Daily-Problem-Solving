//Largest subarray with 0 sum
//Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

 int maxLen(const vector<int>& arr) {
    std::unordered_map<int, int> prefixSumIndices;
    int maxLength = 0;
    int prefixSum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        prefixSum += arr[i];

        if (prefixSum == 0) {
            maxLength = i + 1;
        } else if (prefixSumIndices.find(prefixSum) != prefixSumIndices.end()) {
            maxLength = std::max(maxLength, i - prefixSumIndices[prefixSum]);
        } else {
            prefixSumIndices[prefixSum] = i;
        }
    }

    return maxLength;
}