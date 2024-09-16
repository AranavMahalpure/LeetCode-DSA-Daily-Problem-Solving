
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    std::reverse(nums.begin() + i + 1, nums.end());
}
