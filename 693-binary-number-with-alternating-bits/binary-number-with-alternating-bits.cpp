class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> Binary;
        int i=0;
        while(n>0)
        {
            Binary.push_back(n%2);
            n = n/2;
            i++;
        }
        for(int i = 0;i<Binary.size()-1;i++)
        {
            if(Binary[i] == Binary[i+1])
                return false;
        }
        return true;
        
    }
};