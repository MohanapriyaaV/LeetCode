class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j && n-j-1==i)
                    sum +=mat[i][j];
                else if(i==j)
                    sum +=mat[i][j];
                else if(i==n-j-1)
                    sum +=mat[i][j];

            }
        }
        return sum;
    }
};