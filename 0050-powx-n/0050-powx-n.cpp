class Solution {
public:
    double calculatePowRecursive(double x, long n) {

        //Terminating conditions
        if (n == 1)
            return x;
        if (n == 0)
            return 1;

        if (n % 4 == 0)
            return calculatePowRecursive(x * x, n / 4) * calculatePowRecursive(x * x, n / 4);
        if (n % 2 == 0)
            return calculatePowRecursive(x * x, n / 2);
        else
            return x * calculatePowRecursive(x, (n - 1));
    }

    double myPow(double x, int n) {
        double ans = 1;
        long N;

        if (n < 0) {
            N = -(long)n;
            return 1.0 / calculatePowRecursive(x, N);
        }

        return calculatePowRecursive(x, n);
    }
};