class Solution {
public:
    int strStr(string haystack, string needle) {
        int strtIndx = 0;
        int needleLen = needle.length();
        int haystackLen = haystack.length();
        
        // Edge case: If needle is empty, return 0
        if (needleLen == 0) {
            return 0;
        }

        // Edge case: If needle is longer than haystack, return -1
        if (needleLen > haystackLen) {
            return -1;
        }

        while (strtIndx <= haystackLen - needleLen) {
            // Compare substring with the needle
            if (haystack.substr(strtIndx, needleLen) == needle) {
                return strtIndx;
            }
            strtIndx++;
        }
        return -1;
    }
};
