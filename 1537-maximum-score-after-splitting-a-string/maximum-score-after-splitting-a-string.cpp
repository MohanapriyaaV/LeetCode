class Solution {
public:
    int maxScore(string s) {
       
        int MaxScore=0;
       
        for(int i=1;i<s.size();i++)
        {
            int count1 = 0;
            int count2 = 0;
           
            for(int j=0;j<i;j++)
            {
                if(s[j]=='0') count1++;
            }
            for(int j=i;j<s.size();j++)
            {
                if(s[j]=='1') count2++;
            }
            MaxScore = max(MaxScore,count1+count2);
        }
        return MaxScore;
    }
};