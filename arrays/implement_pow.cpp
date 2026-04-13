// Pow(x, n)
// Idea: Used Binary Exponentiation (Exponentiation by Squaring) to reduce time from O(n) to O(log n)
// Time Complexity: O(log n)
// Space Complexity: O(log n)  // due to recursion stack

class Solution {
public:
    double power(double x, long n) {
        // Base case
        if (n == 0) return 1.0;

        // If n is even: (x^n) = (x*x)^(n/2)
        if (n % 2 == 0) {
            return power(x * x, n / 2);
        }

        // If n is odd: (x^n) = x * (x^(n-1))
        return x * power(x, n - 1);
    }

    double myPow(double x, int n) {
        long num = n;

        // Handle negative exponent
        if (num < 0) {
            return 1.0 / power(x, -num);
        }

        return power(x, num);
    }
};
