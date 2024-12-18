/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maj = nums[0];
        int count = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(maj == nums[i])
            {
                count++;
            }
            else
            {
                maj = nums[i];
                count = 1;
            }
            if(count>nums.size()/2)
            {
                return maj;
            }
        }
        return maj;
    }
};*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};