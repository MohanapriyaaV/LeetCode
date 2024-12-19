class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> S;
        int c = 0;
        for (char i : s) {
            if (i == '(')
                S.push(i);
            else {
                if (S.empty())
                    c++;
                else
                    S.pop();
            }
        }
        return c + S.size();
    }
};
// class Solution {
// public:
//     int minAddToMakeValid(string s)
//     {
//         unordered_map<char,int> map;
//         for(auto c:s) map[c]++;
//         int f1 = map['('];
//         int f2 = map[')'];
//         return abs(f1-f2);
//     }

// };