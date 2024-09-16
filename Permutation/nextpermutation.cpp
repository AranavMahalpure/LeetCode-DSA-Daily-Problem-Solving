void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    vector<int> num = nums;
    sort(num.begin(), num.end());
    vector<vector<int>> per;
    do {
        per.push_back(num);
    } while (next_permutation(num.begin(), num.end()));
    int i;
    for (i = 0; i < per.size(); i++) {
        if (per[i] == nums) {
            break;
        }
    }
    if (i == per.size() - 1) {
        nums = per[0];
    } else {
        nums = per[i + 1];
    }
}



