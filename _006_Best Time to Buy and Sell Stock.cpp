link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& a) {
       int ans=0;
        int x=INT_MAX;
        for(int i=0;i<a.size();i++)
        {
           x=min(a[i],x);
            ans=max((a[i]-x),ans);
        }
        return ans;
    }
};