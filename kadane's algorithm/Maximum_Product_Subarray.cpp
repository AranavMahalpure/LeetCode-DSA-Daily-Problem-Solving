//152. Maximum Product Subarray
//Given an integer array nums, find a 
// subarray
//  that has the largest product, and return the product.

// The test cases are generated so that the answer will fit in a 32-bit integer.

 long long maxProduct(vector<int>& nums) {
         if (nums.empty()) return 0;

        int max_product = 0;
        int min_product = 0;
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(max_product, min_product);
            }

            max_product = max(nums[i], max_product * nums[i]);
            min_product = min(nums[i], min_product * nums[i]);

            result = max(result, max_product);
        }

        return result;
    }