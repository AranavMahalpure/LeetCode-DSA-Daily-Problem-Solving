//128. Longest Consecutive Sequence
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 int longestConsecutive(vector<int>& nums) {
         if (nums.size() == 0) {
            return 0;
        }

        sort(nums.begin(), nums.end());
        int cnt = 1;
        int max_length = 1;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1] + 1) {
                cnt++;
                max_length = max(max_length, cnt);
            } else if (nums[i] != nums[i-1]) {
                cnt = 1; // Reset count if the numbers are not consecutive
            }
            
        }
        return max_length;
    }