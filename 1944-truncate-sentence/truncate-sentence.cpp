class Solution
{
public:
    string truncateSentence(string s, int k)
     {
       string result;
       int wc = 0;
       for(int i=0;i<s.length();i++)
       {
        if(s[i] == ' ')
        {
            wc++;
            if(wc==k) break;
        }
        result+=s[i];
       }
       return result;
     }
};