class Solution {
public:
    int longestPalindrome(string s) {
    vector<int> char_count(128, 0);  // ASCII character set size
    for (char c : s) {
        char_count[c]++;
    }
    int length = 0;
    bool odd_found = false;
    for (int count : char_count) {
        if (count % 2 == 0) {
            length += count;
        } else {
            length += count - 1;
            odd_found = true;
        }
    }
    if (odd_found) {
        length += 1;
    }
    return length;
    }
};