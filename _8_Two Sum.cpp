//link:-https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int l =nums.size();
        vector<pair<int,int>> p;
        for(int i=0;i<l;i++)
        {
            p.push_back({nums[i],i});
        }
        
        
        sort(p.begin(),p.end());
        int i=0,j=l-1;
        vector<int> v;
        while(i<j)
        {
            if((p[i].first+p[j].first)==t) {v.push_back(p[i].second); v.push_back(p[j].second); break;}
            else if((p[i].first+p[j].first)<t) i++;
            else j--;
        }
      return v;  
    }
     
};
