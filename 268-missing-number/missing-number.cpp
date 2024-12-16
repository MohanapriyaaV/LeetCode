class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int totalSum = 0;
        int size = nums.size();
        for(int i =0;i<size;i++)
        {
            sum = sum+nums[i];
        }
        totalSum = (size*(size+1))/2;
       return totalSum - sum;
        
    }
};