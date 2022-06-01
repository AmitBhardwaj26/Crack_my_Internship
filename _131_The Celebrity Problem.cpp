//link: https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1#


/*
push all 0 to n-1 into the stack pop 2 ele if m[i][j]==1 and m[j][i]==0 push j 
means j is known by someone and j does not know i 
at the end we find only one element  check is x does't know anyone and others know j  
*/
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        while(s.size()>1)
        {
            int i=s.top(); s.pop() ; int j=s.top(); s.pop();
            if(M[i][j]==1 && M[j][i]==0) {s.push(j);  }
            if(M[i][j]==0 && M[j][i]==1) {s.push(i);  }
            
        }
        if(s.size()==0) return -1;
        int x=s.top();
        bool check=0;
        for(int i=0;i<n;i++)
        {
            if(M[i][x]==0 && i!=x ) check=1;
            if(M[x][i]==1 ) check=1;
        }
        if(check) return -1;
        else return x;
    }
};