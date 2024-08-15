class Solution {
public:
   string minRemoveToMakeValid(string s) {
    stack<int> st;
    set<int> invalidIndices;
    string ans;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (!st.empty()) {
                st.pop();
            } else {
                invalidIndices.insert(i);
            }
        }
    }
    
    while (!st.empty()) {
        invalidIndices.insert(st.top());
        st.pop();
    }
    
    for (int i = 0; i < s.size(); i++) {
        if (invalidIndices.find(i) == invalidIndices.end()) {
            ans += s[i]; // Add the character to the result if it's not an invalid index
        }
    }
    
    return ans;
}

};