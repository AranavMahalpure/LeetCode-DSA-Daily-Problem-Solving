class KthLargest {
private:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (auto num : nums) {
            pq.push(num); 
        }
        // If there are more than k elements, we need to reduce the size of the priority queue to k
        while (pq.size() > k) {
            pq.pop();
        }
    }
    
    int add(int val) {
        if (pq.size() < k) {
            pq.push(val);  // Correctly push the new value
        } else if (val > pq.top()) {
            pq.pop();
            pq.push(val);
        }
        return pq.top();  // Return the k-th largest element
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */