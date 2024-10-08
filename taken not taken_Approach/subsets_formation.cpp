// 78. Subsets

// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

void fuct(int ind, int n, vector<vector<int>>& ans, vector<int>& current, vector<int>& v) {
        if (ind == n) {
            ans.push_back(current);
            return;
        }
        // Include the element at index 'ind'
        current.push_back(v[ind]);
        fuct(ind + 1, n, ans, current, v);
        // Exclude the element at index 'ind'
        current.pop_back();
        fuct(ind + 1, n, ans, current, v);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        fuct(0, nums.size(), ans, current, nums);
        return ans;
    }