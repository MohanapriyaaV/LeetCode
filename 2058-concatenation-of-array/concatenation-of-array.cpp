class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        int x = 0;
        if(x == 0)
        {
            for(int i=0;i<n;i++)
            {
                ans[i] = nums[i];
                x=x+1;
            }
        }
        for(int i=0;i<n;i++)
        {
                ans[i+n] = nums[i];
               
        }
      
    
        return ans;
    }
};