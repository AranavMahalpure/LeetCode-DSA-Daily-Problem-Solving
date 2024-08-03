class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        int reach = 0;        // The farthest point that can be reached.
        int lastJumped = 0;   // The farthest point that can be reached with the current number of jumps.
        int jumps = 0;        // Number of jumps made.

        for (int i = 0; i < n; ++i) {
            if (i > reach) break; // If the current index is beyond the farthest reachable point, break.

            reach = max(reach, i + nums[i]);

            if (i == lastJumped) { // If we've reached the end of the current jump's reach...
                jumps++;            // Increment the number of jumps
                lastJumped = reach; // Update the point reached with this jump

                if (reach >= n - 1) break; // If we can reach the end, break
            }
        }

        return jumps;
    }
};