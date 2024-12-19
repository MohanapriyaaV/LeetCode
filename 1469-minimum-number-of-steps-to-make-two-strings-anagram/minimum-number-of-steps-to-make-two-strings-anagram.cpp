class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> map1 , map2;
        for(auto c1:s) map1[c1]++;
        for(auto c2:t) map2[c2]++;
            
        
        int result = 0;
        for(auto &[ch , count] : map1)
        {
            if(count>map2[ch])
            {
                result += count - map2[ch];
            }
        }
        return result;
    }
};