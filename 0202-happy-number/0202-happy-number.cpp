class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seenNumbers;

        while (n != 1 && seenNumbers.find(n) == seenNumbers.end()) {
            seenNumbers.insert(n);
            n = sumOfSquares(n);
        }

        return n == 1;
    }

private:
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};