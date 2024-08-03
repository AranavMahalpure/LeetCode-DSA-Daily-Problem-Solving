// https://www.geeksforgeeks.org/problems/subset-sums2234/

void findSubsetSums(int index, int n, int currentSum, vector<int>& arr, vector<int>& result) {
    if (index == n) {
        result.push_back(currentSum);
        return;
    }

    // Include the current element in the sum
    findSubsetSums(index + 1, n, currentSum + arr[index], arr, result);
    
    // Exclude the current element from the sum
    findSubsetSums(index + 1, n, currentSum, arr, result);
}

vector<int> subsetSums(vector<int> arr, int n) {
    vector<int> result;
    findSubsetSums(0, n, 0, arr, result);
    return result;
}