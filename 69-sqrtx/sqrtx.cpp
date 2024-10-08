class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
            return x;
        int start = 1;
        long end = x;
        long mid = -1;

        while(start<=end)
        {
            mid = (start+end)/2;

            if((long) mid * mid > (long) x)
                end = mid-1;
            else if(mid*mid == x)
                return mid;
            else
                start = mid+1;
        }
        return (int)end;
        
    }
};