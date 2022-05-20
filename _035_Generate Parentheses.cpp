//link: https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    vector<string> ans; 
    int x;  // size of ans
    void solve(string s ,int count)
    {
        // base case
        if(s.size()==x && count==0) {ans.push_back(s); return ;}
        else if(s.size()>x) return;
        
        // choice diagram
        if(count>0)  solve(s+')',count-1); // take ) or ( if count is greater than 0;
        solve(s+'(',count+1); // else take (
        
    }
    
    vector<string> generateParenthesis(int n) {
        x=2*n;
        string s="";
        solve(s,0);
        return ans;
    }
};