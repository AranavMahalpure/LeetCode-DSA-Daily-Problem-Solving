// 40. Combination Sum II

#include <vector>
#include <algorithm>

using namespace std;

void findCombinations(int index, int n, int target, vector<int>& current, vector<int>& candidates, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < n; i++) {
        // Skip duplicates
        if (i > index && candidates[i] == candidates[i - 1])
            continue;
        
        // If the current number is greater than the remaining target, break the loop
        if (candidates[i] > target)
            break;
        
        current.push_back(candidates[i]);
        findCombinations(i + 1, n, target - candidates[i], current, candidates, result);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> current;
    sort(candidates.begin(), candidates.end()); // Sort the candidates to handle duplicates
    findCombinations(0, candidates.size(), target, current, candidates, result);
    return result;
}
