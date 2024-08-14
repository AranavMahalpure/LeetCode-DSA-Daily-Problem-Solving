class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>st;
        vector<int>ans(n);
        for (int i=0;i<n;i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
              int index=st.top();
              st.pop();
              ans[index]=i-index;
            }
            st.push(i);
        }
        return ans;
    }
};