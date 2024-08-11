class Solution {
public:
   vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};  // Return an empty vector if the input is empty
        
        vector<string> result;
        string current;
        vector<string> digitToLetters = {
            "",    "",    "abc", "def",  // '0', '1', '2', '3'
            "ghi", "jkl", "mno",         // '4', '5', '6'
            "pqrs", "tuv", "wxyz"        // '7', '8', '9'
        };
        
        backtrack(digits, 0, current, result, digitToLetters);
        return result;
    }
    
private:
    void backtrack(const string& digits, int index, string& current, vector<string>& result, const vector<string>& digitToLetters) {
        if (index == digits.size()) {
            result.push_back(current);  // If all digits have been processed, add the combination to the result
            return;
        }
        
        string letters = digitToLetters[digits[index] - '0'];  // Map the digit to its corresponding letters
        for (char letter : letters) {
            current.push_back(letter);   // Add the letter to the current combination
            backtrack(digits, index + 1, current, result, digitToLetters);  // Move to the next digit
            current.pop_back();  // Backtrack to explore other combinations
        }
    }
};