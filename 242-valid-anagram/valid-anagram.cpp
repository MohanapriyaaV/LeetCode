class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; // Length check
        
        vector<int> freq(26, 0); // Frequency array for lowercase English letters

        // Count occurrences in `s` and `t`
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // Check if all frequencies are zero
        for (int count : freq) {
            if (count != 0) return false;
        }

        return true; // All counts matched, it's an anagram
    }
};
