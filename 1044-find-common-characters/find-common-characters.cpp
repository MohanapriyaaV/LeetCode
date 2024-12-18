class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX); // Frequency of each character across all words

        for (string& word : words) {
            vector<int> charFreq(26, 0); // Frequency of characters in the current word
            for (char c : word) {
                charFreq[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], charFreq[i]); // Update minimum frequency
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (minFreq[i] > 0) {
                result.push_back(string(1, i + 'a')); // Add character to result
                minFreq[i]--;
            }
        }

        return result;
    }
};
