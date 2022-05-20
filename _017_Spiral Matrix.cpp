//link: https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        if(m==1) return matrix[0];
        vector<int> ans;
        int si =m*n;
        int c=0;
        if(n==1) 
        {
            for(int i=0;i<m;i++) ans.push_back(matrix[i][0]);
            return ans;
         }

        int rs=0,cs=0,ce=n-1,re=m-1,ccs=0;
        while(rs<=re && cs<=ce)
        {
            for(int i=rs;i<ce;i++) ans.push_back(matrix[rs][i]);
            rs++;
            for(int i=cs;i<re;i++) ans.push_back(matrix[i][ce]);
            cs++;
            for(int i=ce;i>=rs;i--) ans.push_back(matrix[re][i]);
            ce--;
            for(int i=re;i>=rs;i--) ans.push_back(matrix[i][ccs]);
              ccs++; re--;  
        }
        ans.push_back(matrix[m/2][n/2]);
        while(ans.size()>si) ans.pop_back();
        return ans;
    }
};