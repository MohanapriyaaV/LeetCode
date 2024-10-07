class Solution {
public:
    int minLength(string s) {
        stack<char> stck;
        for(int i=0;i<s.size();i++)
        {
            char curChar = s[i];
            if(stck.empty())
            {
                stck.push(curChar);
                continue;
            }
            if(curChar == 'B' && stck.top() == 'A')
            {
                stck.pop();
            }
            else if(curChar == 'D' && stck.top() == 'C')
            {
                stck.pop();
            }
            else
            {
                stck.push(curChar);
            }
        }
        return stck.size();
    }
};