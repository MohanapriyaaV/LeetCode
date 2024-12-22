class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        int r=n%k;
        if (r != 0) {
            s.append(k - r, fill);
        }
        int l=s.size()/k;
        vector<string> res;
       for (int i = 0; i < l; ++i) {
            res.push_back(s.substr(i * k, k));
        }
        return res;
    }
};