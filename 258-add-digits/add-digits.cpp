class Solution {
public:
    int addDigits(int num) {
        int result = 0;
        int rem = 0;
        while(num>0||result>9)
        {
            if(num == 0 && result>9)
            {
                num = result;
                result = 0;
            }
            rem = num%10;
            num = num/10;
            result += rem;
        }
        
        return result;
    }
};