class Solution {
public:
    int clumsy(int n) {
        stack<int> stk;
        stk.push(n--); 
        int i = 0;     
        int ans = 0;   

        while (n > 0) {
            switch (i % 4) {
                case 0: { 
                    int top = stk.top();
                    stk.pop();
                    stk.push(top * n);
                    break;
                }
                case 1: { 
                    int top = stk.top();
                    stk.pop();
                    stk.push(top / n);
                    break;
                }
                case 2: { 
                    stk.push(n);
                    break;
                }
                case 3: { 
                    stk.push(-n);
                    break;
                }
            }
            i++;  
            n--;   
        }

       
        while (!stk.empty()) {
            ans += stk.top();
            stk.pop();
        }
        
        return ans;
    }
};
