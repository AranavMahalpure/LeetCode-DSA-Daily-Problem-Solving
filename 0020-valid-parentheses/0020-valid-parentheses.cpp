class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(auto&c : s){
            if(c == '(' || c == '{' || c == '['){
                stack.push(c);
            }else if (c == ')'){
                if(stack.empty() || stack.top() != '(') return false;
                stack.pop();
            }else if (c == '}'){
                if(stack.empty() || stack.top() != '{') return false;
                stack.pop();
            }else if (c == ']'){
                if (stack.empty() || stack.top() != '[') return false;
                stack.pop();
            }
        }
      return stack.empty();
    }
};