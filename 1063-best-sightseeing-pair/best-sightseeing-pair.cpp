class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        if(n<=2) return values[0]+0+values[1]-1;
        vector<int> SuffixMax(n);
        SuffixMax[n-1] = values[n-1] - (n-1);
        for(int i = n-2; i>=0; i--)
        {
            SuffixMax[i] = max(SuffixMax[i+1], values[i]-i);
        }
        int maxScore = INT_MIN;
        for(int i= 0; i<n-1; i++)
        {
            maxScore = max(maxScore, values[i]+i+SuffixMax[i+1]);
        }
        return maxScore;
    }
};