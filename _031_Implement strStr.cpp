//  link: https://leetcode.com/problems/implement-strstr/

// use substr or two for loops and break each time is get return 
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(), m=needle.size();
        for(int i=0,j=m;j<=n;j++,i++)
        {
            string s=haystack.substr(i,m);
            //cout<<s<<" ";
            if(s==needle) return i;
        }
        return -1;
    }
};