class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainderCount(k, 0);
        
        // Count occurrences of each remainder
        for (int num : arr) {
            int remainder = ((num % k) + k) % k;  // Handle negative numbers
            remainderCount[remainder]++;
        }
        
        // Check if pairs can be formed
        if (remainderCount[0] % 2 != 0) return false;  // Remainder 0 elements must be paired with each other
        
        for (int i = 1; i <= k / 2; i++) {
            if (remainderCount[i] != remainderCount[k - i]) return false;  // Check if remainder i and k-i have equal count
        }
        
        return true;
    }
};
