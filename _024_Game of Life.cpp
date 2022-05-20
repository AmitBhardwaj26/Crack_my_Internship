// link: https://leetcode.com/problems/game-of-life/

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>> ans(n,vector<int> (m,0) ) ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                long long x=0;
                if(i!=0 ) 
                {
                            {x+=board[i-1][j];}
                   if(j!=0) {x+=board[i-1][j-1];}         
                }
                if(j!=0)  { x+=board[i][j-1];}
                if(i!=n-1) 
                {
                                       x+=board[i+1][j];
                    if(j!=0){ x+=board[i+1][j-1];}
                    if(j!=m-1) {x+=board[i+1][j+1]; }
                }
                if(j!=m-1)
                {
                    x=x+board[i][j+1];
                    if(i!=0) {x=x+board[i-1][j+1];}
                }
                if(board[i][j]==1 && x<2) ans[i][j]=0;
                else if(board[i][j]==1 && x>3) ans[i][j]=0;
                else if(board[i][j]==0 && x==3) ans[i][j]=1;
                else ans[i][j]=board[i][j];
                //cout<<ans[i][j]<<" ";
            }
          //  cout<<endl;
        }
        board=ans;
    }
};