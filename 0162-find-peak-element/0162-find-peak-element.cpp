class Solution {
public:
    int findPeakElement(vector<int>& arr) {
         int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[mid + 1]) {
            // You are in the decreasing part of the mountain
            // This means the peak is to the left (including mid)
            right = mid;
        } else {
            // You are in the increasing part of the mountain
            left = mid + 1;
        }
    }

    // When the while loop ends, left == right, pointing to the peak index
    return left;
    }
};