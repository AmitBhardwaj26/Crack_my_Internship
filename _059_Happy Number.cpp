// link:https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return 1;
        unordered_map<int,int> m;
        m[n]++;
        string s=to_string(n);
        while(1)
        {
            int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans+=pow((s[i]-'0'),2);
        }
        if(m[ans]!=0) return false;
        else if(ans==1) return true;
        m[ans]++;
        s=to_string(ans);
        }
        return 0;
    }
};