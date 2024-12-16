class Solution {
public:
    int ReturnMin(vector<int> & nums)
    {
        int min = nums[0],ind =0;
        for(int i=1;i<nums.size();i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
                ind = i;
            }
        }
        return ind;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        if (nums.empty()) return nums;
        for(int i=1;i<=k;i++)
        {
            int ind = ReturnMin(nums);
            nums[ind] = nums[ind]*multiplier;
        }
        return nums;
        
    }
};