// link: https://leetcode.com/problems/rotate-image/

// swap( m[i][j] ,m[j][i] ), reverse each row
class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++)
        {
            for(int j=i;j<m[i].size();j++)
            {
                int t=m[i][j]; m[i][j]=m[j][i]; m[j][i]=t;
            }
            reverse(m[i].begin(),m[i].end());
        }
        
    }
};