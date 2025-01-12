class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i] == "C")
            {
                stk.pop();
            }
            else if(operations[i] == "D")
            {
                int topp = stk.top();
                stk.push(topp*2);
            }
            else if(operations[i] == "+")
            {
                int top1 = stk.top();
                stk.pop();
                int top2 = stk.top();
                stk.push(top1);
                stk.push(top1+top2);
            }
            else
            {
                stk.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while(!stk.empty())
        {
            sum+=stk.top();
            stk.pop();
        }
        return sum;
        
    }
};