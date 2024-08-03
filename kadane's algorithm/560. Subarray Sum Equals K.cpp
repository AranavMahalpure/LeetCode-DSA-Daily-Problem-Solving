// 560. Subarray Sum Equals K
// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

int subarraySum(vector<int>& a, int k) {
        unordered_map<int, int> sumMap;
        int sum = 0;
        int maxLength = 0;
        int n=a.size();
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sum == k) {
                maxLength = i+1;
            }
            
            if (sumMap.find(sum) == sumMap.end()) {
                sumMap[sum] = 1+i;
            }
            
            if (sumMap.find(sum - k) != sumMap.end()) {
                maxLength = max(maxLength,  sumMap[sum - k]);
            }
        }
        return maxLength;
    }
    