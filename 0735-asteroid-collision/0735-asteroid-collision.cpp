class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int> st;
    
    for (int i = 0; i < asteroids.size(); i++) {
        bool destroyed = false;
        
        // Check for collision if the stack has a positive asteroid and current asteroid is negative
        while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
            if (st.top() < -asteroids[i]) {
                // Top of the stack is smaller, so it gets destroyed
                st.pop();
                continue;
            } else if (st.top() == -asteroids[i]) {
                // Both are equal, so both get destroyed
                st.pop();
            }
            // The current asteroid gets destroyed, so we break out of the loop
            destroyed = true;
            break;
        }
        
        // If current asteroid survived, push it onto the stack
        if (!destroyed) {
            st.push(asteroids[i]);
        }
    }
    
    // Prepare the result from the stack
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};