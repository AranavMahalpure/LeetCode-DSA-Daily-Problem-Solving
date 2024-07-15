class Solution {
public:
    bool isPowerOfTwo(int x) {
    // A power of two has exactly one bit set in its binary representation
    // This is true if and only if x > 0 and x & (x - 1) == 0
    return x > 0 && (x & (x - 1)) == 0;
}

};