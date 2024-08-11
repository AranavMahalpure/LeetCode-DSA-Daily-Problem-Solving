class Solution {
public:
void fuct(int ind, int n, int t, vector<vector<int>>& ans, vector<int>& current, vector<int>& v) {
    if (t == 0) {
        ans.push_back(current);
        return;
    }
    for (int i = ind; i < n; i++) {
        if (i > ind && v[i] == v[i - 1]) continue; // Skip duplicates
        if (v[i] > t) break; // No need to proceed if the number is greater than the remaining target
        current.push_back(v[i]);
        fuct(i + 1, n, t - v[i], ans, current, v);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> current;
    sort(candidates.begin(), candidates.end()); // Sort to handle duplicates
    fuct(0, candidates.size(), target, ans, current, candidates);
    return ans;
}
};