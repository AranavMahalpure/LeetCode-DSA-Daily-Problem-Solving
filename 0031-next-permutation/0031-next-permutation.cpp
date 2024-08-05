class Solution {
public:
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void nextPermutation(vector<int>& nums) {
    int ind = -1;
    int n = nums.size();

    // Find the first decreasing element from the right
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            ind = i;
            break;
        }
    }

    // If no such element is found, the array is in descending order
    // Sort the array to return to the smallest permutation
    if (ind == -1) {
        sort(nums.begin(), nums.end());
        return;
    }

    // Find the element just larger than nums[ind] from the right
    for (int i = n - 1; i > ind; i--) {
        if (nums[i] > nums[ind]) {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // Reverse the elements after ind to get the next permutation
    reverse(nums.begin() + ind + 1, nums.end());
    }
};