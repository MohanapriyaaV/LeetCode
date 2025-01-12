class Solution {
public:
    int signFunc(double product)
    {
        if(product > 0) return 1;
        else if(product < 0) return -1;
        else return 0;
    }
    int arraySign(vector<int>& nums) {
        double product = 1;
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0) return 0;
            product*=nums[i];
        }
        result = signFunc(product);
        return result;
    }
};