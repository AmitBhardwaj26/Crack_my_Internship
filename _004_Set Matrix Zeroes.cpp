//link: https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int> mr,mc;
        for(int i=0;i<matrix.size();i++)
        {
           for(int j=0;j<matrix[0].size();j++)
           {
                if(matrix[i][j]==0) { mr[i]=1; mc[j]=1; }
           }
        }
        for(int i=0;i<matrix.size();i++)
        {
           for(int j=0;j<matrix[0].size();j++)
           {
                if(mr[i]!=0 || mc[j]!=0) { matrix[i][j]=0; }
           }
        }
        
    }
};