class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string ReversedWord = words[i];
            reverse(ReversedWord.begin(),ReversedWord.end());
            if(ReversedWord == words[i])
            {
                return words[i];
            }
        }
        return "";
        
    }
};