class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         map<int, int> nextGreater;
        stack<int> s;
        for(auto&num : nums2){
            while (!s.empty() && s.top() < num){
                nextGreater[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        vector<int> ans;
        for(auto& num : nums1){
            if(nextGreater.find(num) != nextGreater.end()){
                ans.push_back(nextGreater[num]);
            }else{
                ans.push_back(-1);
            }
        }

        return ans;
    }
};