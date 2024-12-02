class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        long result = 0; // Use long to detect overflow

        while (x != 0) {
            rem = x % 10; // Get the last digit
            x /= 10;      // Remove the last digit

            // Check for overflow/underflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && rem > 7)) return 0;
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && rem < -8)) return 0;

            result = result * 10 + rem; // Update the result
        }

        return (int)result; // Safe to cast back to int after checks
    }
};
