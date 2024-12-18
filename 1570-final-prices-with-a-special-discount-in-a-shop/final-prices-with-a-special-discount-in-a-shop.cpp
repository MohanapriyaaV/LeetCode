class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        int j=0;
        for(int i=0;i<prices.size();i++)
        {
            for(j=i+1;j<prices.size();j++)
            {
                 if(prices[j]<=prices[i])
                 {
                    result.push_back(prices[i]-prices[j]);
                    break;
                 }
            }
            if(j==prices.size())
            {
                result.push_back(prices[i]);
            }
            
        }
        return result;
    }
};