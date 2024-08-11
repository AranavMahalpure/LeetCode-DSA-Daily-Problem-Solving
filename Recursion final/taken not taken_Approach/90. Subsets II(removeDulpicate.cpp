// 90. Subsets II
// (remove Duplicates )


void fuct(int ind, int n, set<vector<int>>& ans, vector<int>& current, vector<int>& v) {
        if (ind == n) {
            ans.insert(current);
            return;
        }
        // Include the element at index 'ind'
        current.push_back(v[ind]);
        fuct(ind + 1, n, ans, current, v);
        // Exclude the element at index 'ind'
        current.pop_back();
        fuct(ind + 1, n, ans, current, v);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans_set;
        vector<int> current;
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        fuct(0, nums.size(), ans_set, current, nums);
        
        // Convert set to vector
        vector<vector<int>> ans(ans_set.begin(), ans_set.end());
        return ans;
    }