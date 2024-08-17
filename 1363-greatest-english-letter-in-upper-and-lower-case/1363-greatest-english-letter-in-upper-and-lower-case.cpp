class Solution {
public:
    string greatestLetter(string s) {
   unordered_set<char> lower_set, upper_set;

    for (char c : s) {
        if (islower(c)) {
            lower_set.insert(c);
        } else if (isupper(c)) {
            upper_set.insert(c);
        }
    }

    for (char c = 'Z'; c >= 'A'; --c) {
        if (lower_set.find(tolower(c)) != lower_set.end() &&
            upper_set.find(c) != upper_set.end()) {
            return string(1, c);
        }
    }

    return "";
}
};