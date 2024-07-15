class Solution {
public:
    int addDigits(int n) {
        // Digital root formula
        if (n == 0) return 0;
        return (n % 9 == 0) ? 9 : (n % 9);
    }
};