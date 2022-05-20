//link: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count;
        string s=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int l=strs[i].size();
             int count=0;
            for(int j=0;j<s.size();j++)
            {
                if(strs[i][j]==s[j]) count++;
                else break;
            }
            count=s.size()-count;
            while(count-->0) s.pop_back();
            
        }
        return s;
    }
};