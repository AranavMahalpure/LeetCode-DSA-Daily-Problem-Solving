class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      priority_queue<pair<int, int>> pq; // Pair of (value, index)
    vector<int> ans;
    // Initialize the priority_queue for the first window
    for (int i = 0; i < k; i++) {
        pq.push({nums[i], i});
    }
    // Add the max of the first window
    ans.push_back(pq.top().first);

    // Process the rest of the windows
    for (int i = k; i < nums.size(); i++) {
        // Add the new element to the priority queue
        pq.push({nums[i], i});

        // Remove elements that are out of the window from the top of the queue
        while (pq.top().second <= i - k) {
            pq.pop();
        }

        // The top element is the max for the current window
        ans.push_back(pq.top().first);
    }

    return ans;
    }
};