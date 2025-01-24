class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            res = word.length();
        }
        return res;
        
    }
};