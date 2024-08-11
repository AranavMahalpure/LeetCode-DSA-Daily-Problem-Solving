//  longest substring without repeating charater 

int longestSubstringWithoutRepeating(string s) {
    unordered_set<char> charSet; // To store characters in the current window
    int left = 0; // Left boundary of the window
    int maxLength = 0; // Maximum length of substring found

    for (int right = 0; right < s.size(); ++right) {
        // If character is already in the set, move the left pointer to remove duplicates
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }

        // Add the current character to the set
        charSet.insert(s[right]);

        // Update the maximum length of the substring
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}


/// recursion taken and not taken appraoch 
int longestSubstringWithoutRepeatingHelper(const string& s, int start, int end, unordered_set<char>& currentSet) {
    if (start >= s.size()) {
        return 0;
    }

    int maxLength = 0;
    for (int i = start; i < s.size(); ++i) {
        if (currentSet.find(s[i]) == currentSet.end()) {
            currentSet.insert(s[i]);
            maxLength = max(maxLength, i - start + 1);
            maxLength = max(maxLength, longestSubstringWithoutRepeatingHelper(s, i + 1, end, currentSet));
            currentSet.erase(s[i]);
        }
    }
    
    return maxLength;
}

int longestSubstringWithoutRepeating(const string& s) {
    unordered_set<char> currentSet;
    return longestSubstringWithoutRepeatingHelper(s, 0, s.size(), currentSet);
}