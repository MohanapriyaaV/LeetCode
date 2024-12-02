class Solution {
public:
    char findTheDifference(string s, string t)
     {
        
        for(int i=0;i<t.length();i++)
        {
            bool found = false;
            for(int j=0;j<s.length();j++)
            {
                if(t[i] == s[j])
                {
                    found = true;
                    s[j] = '#';
                    break;
                }
            }
            if(!found) return t[i];
        }
        return '\0';
    }
};