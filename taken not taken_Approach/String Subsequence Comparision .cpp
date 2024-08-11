///Given a pair of strings of equal lengths, Geek wants to find the better string. The better string is the string having more number of distinct subsequences.
If both the strings have equal count of distinct subsequence then return str1.
///https://www.geeksforgeeks.org/problems/better-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=better-string



#include <iostream>
#include <vector>

using namespace std;

// Function to count distinct subsequences using dynamic programming
int countDistinctSubsequences(const string& str) {
    int n = str.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // The empty subsequence

    // Last occurrence map for each character
    vector<int> last(256, -1);

    for (int i = 1; i <= n; ++i) {
        dp[i] = 2 * dp[i - 1];

        // If the character has appeared before
        if (last[str[i - 1]] != -1) {
            dp[i] -= dp[last[str[i - 1]]];
        }

        // Update the last occurrence of the current character
        last[str[i - 1]] = i - 1;
    }

    // Subtract 1 to exclude the empty subsequence
    return dp[n] - 1;
}

// Function to determine the better string based on distinct subsequences
string betterString(string str1, string str2) {
    if (str1.empty()) return str2;
    if (str2.empty()) return str1;

    int count1 = countDistinctSubsequences(str1);
    int count2 = countDistinctSubsequences(str2);

    if (count1 > count2) {
        return str1;
    } else if (count2 > count1) {
        return str2;
    } else {
        return str1;  // If both have equal subsequences, return str1
    }
}

int main() {
    string str1 = "ab";
    string str2 = "aab";

    string result = betterString(str1, str2);
    cout << "Better string: " << result << endl;

    return 0;
}
