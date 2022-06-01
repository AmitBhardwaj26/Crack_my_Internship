//link:  https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<pair<int,int>> v;
        vector<vector<int>> g=grid; //copy of grid;
        int one=0,two=0; //count of 1 and 2
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)   v.push_back({i,j});
                else if(grid[i][j]==2) two++;
            }
        }
        
        one=v.size(); // v stores all the ones
        if(two==0 && v.size()>0) return -1; 
        //cout<<one<<" ";
        int ans=0;
        int prv=0; //if prev and one count is same means no rooten nearby oranges
        while(one>0) // while any 1 have
        {
            ans++;
            prv=one; //previous one count stores 
            for(int p=0;p<v.size();p++)
            {
                int i=v[p].first,j=v[p].second;
                if(grid[i][j]==1 && 
                   ( //check all four directions with limits
                    (i-1>=0 && grid[i-1][j]==2 )||  
                    (j-1>=0 && grid[i][j-1]==2)||
                    (i+1<m && grid[i+1][j]==2) ||
                    (j+1<n && grid[i][j+1]==2))
                  )
                {
                 g[i][j]=2; one--;  // mark them rooten decrease one count
                }
            }
            grid=g; // copy new grid to old one
            if(prv==one) break; //breaking condition
            //cout<<ans<<" ";
        }
        if(one!=0 ) return -1;
        return ans;
    }
};
