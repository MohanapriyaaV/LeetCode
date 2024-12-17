class Solution {
public:
    bool isValid(string c) {
        stack<char> stk;
        for(char s : c)
        {
            if(s=='(' || s=='{' || s=='[')
            {
                stk.push(s);
            }
            else
            {
                if(stk.empty() || 
                (s==')' && stk.top()!='(') ||
                (s==']' && stk.top()!='[') ||
                (s=='}' && stk.top()!='{') )
                    return false;
                stk.pop();
            }

        }
        return stk.empty();
        
    }
};