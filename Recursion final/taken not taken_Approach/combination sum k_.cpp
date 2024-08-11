// <!-- 216. Combination Sum III

// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order. 
// solve this by above concept  -->

#include <vector>

using namespace std;

void findCombinations(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0 && n == 0) {
        result.push_back(current);
        return;
    }
    if (k == 0 || n < 0) {
        return;
    }

    for (int i = start; i <= 9; i++) {
        current.push_back(i);
        findCombinations(i + 1, k - 1, n - i, current, result);
        current.pop_back(); // Backtrack
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> result;
    vector<int> current;
    findCombinations(1, k, n, current, result);
    return result;
}
