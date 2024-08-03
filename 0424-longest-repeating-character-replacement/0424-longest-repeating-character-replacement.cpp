class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, maxCount = 0, maxLength = 0;
        vector<int> charCount(26, 0);

        while (right < s.length()) {
            // Increment count of the current character
            charCount[s[right] - 'A']++;
            // Update the maximum count of a single character in the window
            maxCount = max(maxCount, charCount[s[right] - 'A']);
            
            // Check if we need to shrink the window
            while ((right - left + 1) - maxCount > k) {
                charCount[s[left] - 'A']--;
                left++;
            }

            // Calculate the maximum length of a valid window
            maxLength = max(maxLength, right - left + 1);
            right++;
        }

        return maxLength;
    }
};