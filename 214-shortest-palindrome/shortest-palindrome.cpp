class Solution {
public:
    string shortestPalindrome(string s) {
        
        string rev = string(s.rbegin(),s.rend());

        int MatchString = kmp(rev , s);

        return rev.substr(0 , s.length() - MatchString) + s;
    }
private:
    int kmp(const string &txt , const string &patt)
    {
        string NewString = patt + '#' + txt;

        vector<int> pi(NewString.length(),0);
        int i = 1 ;
        int k = 0;
        while(i<NewString.length())
        {
            if(NewString[i] == NewString[k])
            {
                k++;
                pi[i] = k;
                i++;
            }
            else if (k>0)
            {
                k = pi[k-1];
            }
            else
            {
                pi[i] = 0;
                i++;
            }
        }
        return pi.back();
    }
};