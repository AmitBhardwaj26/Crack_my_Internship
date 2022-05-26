//link: https://leetcode.com/problems/max-points-on-a-line/

/*
equation of line
 (y1-y2)x + (x2-x1)y =(x2-x1)y1 +(y1-y2)x1;
  ax + by + c;
  O(N^3) solution check for each one brute force 
*/

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()==1) return 1;
        int n=points.size(),ans=2;
        
        for(int i=0;i<n-2;i++)
        {
            int x1=points[i][0],y1=points[i][1];
            for(int j=i+1;j<n-1;j++)
            {
               int x2=points[j][0],y2=points[j][1];       
                
                int a=y1-y2,b=x2-x1,c=(x2-x1)*y1+(y1-y2)*x1;
                int count=2;
                for(int k=j+1;k<n;k++)
                {
                   int x3=points[k][0],y3=points[k][1];
                   if((a*x3+ b*y3) == c) 
                   {
                       count++  ;
                       //cout<<"[ "<<x3<<" "<<y3<<" ]\n";
                    } 
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};