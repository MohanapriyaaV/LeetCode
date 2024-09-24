class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int digit = 0 , result = 0;
        int original = x;
       while(x>0)
       {
        digit = x%10;
        if (result > (INT_MAX - digit) / 10) 
        {
                return false; // Overflow will occur, so we can't proceed
        }
        x = x/10;
        result = (result*10)+digit;
       }       
       return result == original;
    }
};