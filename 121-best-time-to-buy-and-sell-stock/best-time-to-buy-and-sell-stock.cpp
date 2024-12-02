class Solution {
public:
    int maxProfit(vector<int>& prices)
     {
        int mincost=INT_MAX, maxprofit=0;
       if (prices.empty()) return 0;
       for(int i=0;i<prices.size();i++)
       {
            if(prices[i]<mincost) mincost=prices[i];
            else
            {
                maxprofit = max(maxprofit , prices[i]-mincost);
            }
       }
       return maxprofit;
     }
};