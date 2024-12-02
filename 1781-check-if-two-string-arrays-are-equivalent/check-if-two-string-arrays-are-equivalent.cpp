class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1, result2;
       for(const string & w1 : word1)
        {
            result1+=w1;
        }
        for(const string & w2 : word2)
        {
            result2+=w2;
        }
       return result1==result2;
    }
};