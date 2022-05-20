// link: https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
       
        string z="",ans="";
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ') z=s[i]+z;
            else if(s[i]==' ' && z.size()>0) { ans+=z+" "; z="" ; }
        }
        
        if(z.size()>0) ans+=z;
        else ans.pop_back();
        return ans;
    }
};