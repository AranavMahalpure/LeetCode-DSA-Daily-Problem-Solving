class Solution {
public:
   int canBeTypedWords(string text, string brokenLetters) {
    int count = 0;
    string ans;
    unordered_map<string, int> mp;

    // Build the map with words and their counts
    for (int i = 0; i <= text.size(); i++) {
        if (i == text.size() || text[i] == ' ') {
            if (!ans.empty()) {  // Only insert non-empty words
                if (mp.find(ans) == mp.end()) {
                    mp[ans] = 1;
                } else {
                    mp[ans]++;
                }
                ans = "";  // Reset the word
            }
        } else {
            ans += text[i];
        }
    }

    // Convert brokenLetters into a set for easy lookup
    unordered_set<char> brokenSet(brokenLetters.begin(), brokenLetters.end());

    // Check each word in the map
    for (auto it : mp) {
        string word = it.first;
        bool hasBrokenLetter = false;

        // Check if any character in the word is in the brokenLetters set
        for (char c : word) {
            if (brokenSet.find(c) != brokenSet.end()) {
                hasBrokenLetter = true;
                break;
            }
        }

        // If the word doesn't have any broken letters, add its count
        if (!hasBrokenLetter) {
            count += it.second;
        }
    }

    return count;
}

};