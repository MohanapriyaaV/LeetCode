class Solution {
public:
    vector<int> plusOne(vector<int>& v)
     {
        int n = v.size();
        for(int i = n-1 ; i>=0;i--)
        {
            v[i]++;
            if(v[i]==10)
            {
                v[i] = 0;
            }
            else
            {
                return v;
            }
        }
        v.insert(v.begin(),1);
        return v;
    }
};