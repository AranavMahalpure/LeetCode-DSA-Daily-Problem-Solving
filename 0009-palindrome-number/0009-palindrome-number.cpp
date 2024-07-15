class Solution {
public:
    bool isPalindrome(int num) {
       if (num < 0) return false;

        int original = num;
        long long reversed = 0; // Use long long to handle overflow

        while (num) {
            int rem = num % 10;
            num = num / 10;
            reversed = reversed * 10 + rem;
        }

        // Since reversed is a long long, compare it to the original integer
        return reversed == original;
    }
};