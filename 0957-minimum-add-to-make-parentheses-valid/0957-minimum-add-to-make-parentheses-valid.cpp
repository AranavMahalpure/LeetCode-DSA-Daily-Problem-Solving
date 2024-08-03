class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        int moves = 0;
        for(auto&c : s){
            if(c == '('){
                // Push opening brackets onto the stack
                stk.push(c);
            }else{
                // If it's a closing bracket
                if (!stk.empty() && stk.top() == '('){
                    // Pop the stack if there's a matching opening bracket
                    stk.pop();
                }else{
                    // Otherwise, we need an extra opening bracket
                    moves++;
                }
            }
        }
    //  s = "(((" for this case we need 3 close brackets, moves = 0 , 0 + 3;
        // Add remaining unmatched opening brackets to the moves
        moves+=stk.size();
        return moves;
    }
};