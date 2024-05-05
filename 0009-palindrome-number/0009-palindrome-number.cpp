class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) return false;
    long long rev = 0, num = x;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return x == rev;
    }
};