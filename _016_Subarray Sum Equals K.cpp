// link: https://leetcode.com/problems/subarray-sum-equals-k/

// take O(n) time and O(n) space 
// approch insert prefix sum values into the map if m[x-k] pesent then there must be another  subaarray between them 2: check prfix sum value hit the target 3rd insert prefix sum into map

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;Subarray Sum Equals K
         
        int x=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            x+=nums[i];
           
            if(m[x-k] !=0)
                ans+= m[x-k]; 
            if(x==k) ans++;
             m[x]++;
        }
        return ans;
      
    }
};