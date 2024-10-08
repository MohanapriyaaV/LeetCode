class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count = 0;
        vector<int> result(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for(int j = 0; j<nums.size(); j++)
            {
                if(nums[i] > nums[j])
                {
                    count++;
                }
            }
            result[i] = count;
        }
        return result;
    }
};