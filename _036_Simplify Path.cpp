//link:-https://leetcode.com/problems/simplify-path/

class Solution {
public:
    string simplifyPath(string p) {
        stack<string> s;
        int n=p.size();
        for(int i=0;i<n;i++)
        {
            if(p[i]=='/') continue;
            string temp="";
            int j=i;
            while(i<n && p[i]!='/')
               { temp+=p[i]; i++;}
            if(temp==".." || temp==".") 
            {if(temp==".." && !s.empty()) s.pop();}
            else s.push(temp);
        }
        string ans="";
        while(!s.empty())
        {
            ans="/" + s.top()+ans;
            s.pop();
        }
        return ans==""?"/":ans;
    }
};