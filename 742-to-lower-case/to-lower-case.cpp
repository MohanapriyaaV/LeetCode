class Solution {
public:
    string toLowerCase(string s) { 
        for(int i =0; i<s.size();i++)
        {
            int ascii = (int)s[i];
            if(65<=ascii && ascii<=90)
            {
                ascii+=32;
                s[i]=(char)ascii;
            }
        }
        return s;
        
    }
};